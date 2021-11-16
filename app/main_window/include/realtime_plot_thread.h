#pragma once

#include "PositionPubSubTypes.h"
#include "default_participant.h"
#include "default_subscriber.h"
#include "geometry_msgs/msgs/Position.h"
#include "qcustomplot.h"
#include "sub_variables.h"
#include <QDebug>
#include <QStatusBar>
#include <QThread>

class RealtimePlotThread : public QThread {
  Q_OBJECT

public:
  explicit RealtimePlotThread(QCustomPlot *x_plot, QObject *parent = nullptr);
  ~RealtimePlotThread();

  void run();

public:
  // Create doamin participant
  std::unique_ptr<DefaultParticipant> dp;

  // Motion capture data subscriber
  DDSSubscriber<idl_msg::MocapPubSubType, cpp_msg::Mocap> *mocap_sub;

private:
  // Pointer to plots
  QCustomPlot *x_plot_;
  QCustomPlot *y_plot_;

  // parameters
  // Scrolling spped [lower is more]
  constexpr static int scroll_speed = 5;
};
