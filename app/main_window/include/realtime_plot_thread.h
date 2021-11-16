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

class RealtimePlotThread : public QThread {
  Q_OBJECT

public:
  explicit RealtimePlotThread(QVBoxLayout *layout, QObject *parent = nullptr);
  ~RealtimePlotThread();

  void run();

public:
  // Create doamin participant
  std::unique_ptr<DefaultParticipant> dp;

  // Motion capture data subscriber
  DDSSubscriber<idl_msg::MocapPubSubType, cpp_msg::Mocap> *mocap_sub;

private:
  // Pointer to plot layout
  QVBoxLayout *layout_;

  // Create doamin participant
  std::unique_ptr<RealtimePlotter> plot;

  // parameters
  // Scrolling spped [lower is more]
  constexpr static int scroll_speed = 5;
};
