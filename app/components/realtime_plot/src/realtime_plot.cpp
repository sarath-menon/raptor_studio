#include "realtime_plot.h"
#include "ui_realtime_plot.h"

RealtimePlotter::RealtimePlotter(QWidget *parent)
    : QWidget(parent), ui(new Ui::RealtimePlotter) {
  ui->setupUi(this);
}

RealtimePlotter::~RealtimePlotter() { delete ui; }
