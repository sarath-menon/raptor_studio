#include "realtime_plot_thread.h"
#include <qglobal.h>
#include <qthread.h>

RealtimePlotThread::RealtimePlotThread(QVBoxLayout *layout, QObject *parent)
    : QThread(parent) {

  // Fastdds ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`

  // Create domain participant
  dp = std::make_unique<DefaultParticipant>(0, "godot_visualizer_qos");

  // Create  subscriber
  mocap_sub = new DDSSubscriber(idl_msg::MocapPubSubType(), &sub::mocap_msg,
                                "mocap_pose", dp->participant());

  // initialize  subscriberDefaultParticipant
  mocap_sub->init();

  // Set pointer to ui layout
  layout_ = layout;

  // Create new plot
  plot = new RealtimePlotter();

  // Insert plot in layout
  layout->insertWidget(0, plot);
}

RealtimePlotThread::~RealtimePlotThread() { // Fastdds
  delete mocap_sub;

  delete plot;
}

void RealtimePlotThread::run() { // Blocks until new data is available

  forever {

    // Check if program close has been requeated. if so, leave loop
    if (QThread::currentThread()->isInterruptionRequested()) {
      return;
    }

    mocap_sub->listener->wait_for_data_for_ms(100);
  };
}
