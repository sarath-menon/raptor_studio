#include "mavsdk_thread.h"
#include <qglobal.h>
#include <qthread.h>

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
