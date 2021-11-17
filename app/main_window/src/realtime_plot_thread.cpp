#include "realtime_plot_thread.h"
#include <qglobal.h>
#include <qthread.h>

RealtimePlotThread::RealtimePlotThread(QVBoxLayout *layout, QObject *parent)
    : QThread(parent) {

  // Fastdds ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`

  // Create domain participant
  dp = std::make_unique<DefaultParticipant>(0, "raptor_studio");

  // Create  subscriber
  mocap_sub = new DDSSubscriber(idl_msg::MocapPubSubType(), &sub::mocap_msg,
                                "mocap_pose", dp->participant());

  // initialize  subscriberDefaultParticipant
  mocap_sub->init();

  // Set pointer to ui layout
  layout_ = layout;

  // Create plots
  x_plot = std::make_unique<RealtimePlotter>();
  y_plot = std::make_unique<RealtimePlotter>();
  z_plot = std::make_unique<RealtimePlotter>();

  // Insert plot in layout
  layout->insertWidget(0, x_plot.get());
  layout->insertWidget(1, y_plot.get());
  layout->insertWidget(2, z_plot.get());
}

RealtimePlotThread::~RealtimePlotThread() { // Fastdds
  delete mocap_sub;
}

void RealtimePlotThread::run() { // Blocks until new data is available

  forever {

    // Check if program close has been requeated. if so, leave loop
    if (QThread::currentThread()->isInterruptionRequested()) {
      return;
    }

    // no infinite wait so that control returns to application exit check
    mocap_sub->listener->wait_for_data_for_ms(100);

    // Update plots with latest data from subscriber
    x_plot->set_y_val(sub::mocap_msg.pose.position.x);
    y_plot->set_y_val(sub::mocap_msg.pose.position.y);
    z_plot->set_y_val(sub::mocap_msg.pose.position.z);
  };
}
