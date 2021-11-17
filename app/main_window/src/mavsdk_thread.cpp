#include "mavsdk_thread.h"
#include <qglobal.h>
#include <qthread.h>

std::shared_ptr<mavsdk::System> get_system(mavsdk::Mavsdk &mavsdk) {
  std::cout << "Waiting to discover system...\n";
  auto prom = std::promise<std::shared_ptr<mavsdk::System>>{};
  auto fut = prom.get_future();

  // We wait for new systems to be discovered, once we find one that has an
  // autopilot, we decide to use it.
  mavsdk.subscribe_on_new_system([&mavsdk, &prom]() {
    auto system = mavsdk.systems().back();

    if (system->has_autopilot()) {
      std::cout << "Discovered autopilot\n";

      // Unsubscribe again as we only want to find one system.
      mavsdk.subscribe_on_new_system(nullptr);
      prom.set_value(system);
    }
  });

  // We usually receive heartbeats at 1Hz, therefore we should find a
  // system after around 3 seconds max, surely.
  if (fut.wait_for(std::chrono::seconds(3)) == std::future_status::timeout) {
    std::cerr << "No autopilot found.\n";
    return {};
  }

  // Get discovered system now.
  return fut.get();
}

MavsdkThread::MavsdkThread(QVBoxLayout *layout, QObject *parent)
    : QThread(parent) {

  // Fastdds ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`

  // // Create domain participant
  // dp = std::make_unique<DefaultParticipant>(0, "raptor_studio");

  // // Create  subscriber
  // mocap_sub = new DDSSubscriber(idl_msg::MocapPubSubType(), &sub::mocap_msg,
  //                               "mocap_pose", dp->participant());

  // // initialize  subscriberDefaultParticipant
  // mocap_sub->init();

  // Set pointer to ui layout
  layout_ = layout;

  auto system = get_system(mavsdk);
  if (!system) {
    std::cout << "Could not get system" << std::endl;
  }

  if (connection_result != mavsdk::ConnectionResult::Success) {
    std::cerr << "Connection failed: " << connection_result << '\n';
  }

  // Instantiate pluginis.
  auto telemetry = mavsdk::Telemetry{system};
  auto action = mavsdk::Action{system};

  // // We want to listen to the altitude of the drone at 1 Hz.
  // const mavsdk::Telemetry::Result set_rate_result =
  //     telemetry.set_rate_position(1.0);

  // // Set telemetry rate with erorr checking
  // if (set_rate_result != mavsdk::Telemetry::Result::Success) {
  //   std::cerr << "Setting rate failed: " << set_rate_result << '\n';
  // }

  // std::cout << "selva";

  // // Set up callback to monitor altitude while the vehicle is in flight
  // telemetry.subscribe_position([](mavsdk::Telemetry::Position position) {
  //   std::cout << "Altitude: " << position.relative_altitude_m << " m\n";
  // });
}

MavsdkThread::~MavsdkThread() { // Fastdds
  delete mocap_sub;
}

void MavsdkThread::run() { // Blocks until new data is available

  forever {

    // Check if program close has been requeated. if so, leave loop
    if (QThread::currentThread()->isInterruptionRequested()) {
      return;
    }
  };
}
