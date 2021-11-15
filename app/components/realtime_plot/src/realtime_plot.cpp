#include "realtime_plot.h"
#include "ui_realtime_plot.h"

realtime_plot::realtime_plot(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::realtime_plot)
{
    ui->setupUi(this);
}

realtime_plot::~realtime_plot()
{
    delete ui;
}
