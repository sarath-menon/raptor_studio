#pragma once

#include "PositionPubSubTypes.h"
#include "default_participant.h"
#include "default_subscriber.h"
#include "geometry_msgs/msgs/Position.h"
#include "qcustomplot.h"
#include "realtime_plot.h"
#include "sub_variables.h"
#include <QDebug>
#include <QStatusBar>
#include <QThread>
#include <QVBoxLayout>
#include <chrono>
#include <cstdint>
#include <future>
#include <iostream>
#include <mavsdk/mavsdk.h>
#include <mavsdk/plugins/action/action.h>
#include <mavsdk/plugins/telemetry/telemetry.h>
#include <memory>
#include <thread>

class MavsdkThread : public QThread {
  Q_OBJECT

public:
  explicit MavsdkThread(QVBoxLayout *layout, QObject *parent = nullptr);
  ~MavsdkThread();

  void run();

public:
  // Create doamin participant
  std::unique_ptr<DefaultParticipant> dp;

  // Motion capture data subscriber
  DDSSubscriber<idl_msg::MocapPubSubType, cpp_msg::Mocap> *mocap_sub;

private:
  // Pointer to plot layout
  QVBoxLayout *layout_;

  // parameters

  // mavsdk types
private:
  mavsdk::Mavsdk mavsdk;
  mavsdk::ConnectionResult connection_result =
      mavsdk.add_any_connection("udp://:14540");

  std::unique_ptr<mavsdk::Telemetry> telemetry;
  std::unique_ptr<mavsdk::Action> action;
};
