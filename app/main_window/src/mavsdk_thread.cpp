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
