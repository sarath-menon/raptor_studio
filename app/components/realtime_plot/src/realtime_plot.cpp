#include "realtime_plot.h"
#include "ui_realtime_plot.h"

RealtimePlotter::RealtimePlotter(QWidget *parent)
    : QWidget(parent), ui(new Ui::RealtimePlotter) {
  ui->setupUi(this);

  // timer
  QSharedPointer<QCPAxisTickerTime> timeTicker(new QCPAxisTickerTime);
  timeTicker->setTimeFormat("%h:%m:%s");

  // Set plot properties
  ui->plot->addGraph();
  ui->plot->graph(0)->setPen(QPen(QColor(255, 255, 255)));
  ui->plot->axisRect()->setupFullAxesBox();

  // Set axes properties
  ui->plot->yAxis->setRange(-x_range, x_range);
  ui->plot->yAxis->setLabel("x_position");
  ui->plot->yAxis->setLabelColor(QColor(255, 255, 255));

  // Some settings to make plot look nicer
  QLinearGradient plotGradient;
  plotGradient.setStart(0, 0);
  plotGradient.setFinalStop(0, 350);
  plotGradient.setColorAt(0, QColor(80, 80, 80));
  plotGradient.setColorAt(1, QColor(50, 50, 50));

  QLinearGradient axisRectGradient;
  axisRectGradient.setStart(0, 0);
  axisRectGradient.setFinalStop(0, 350);
  axisRectGradient.setColorAt(0, QColor(80, 80, 80));
  axisRectGradient.setColorAt(1, QColor(30, 30, 30));

  // Set properties
  ui->plot->xAxis->setBasePen(QPen(Qt::white, 1));
  ui->plot->yAxis->setBasePen(QPen(Qt::white, 1));
  ui->plot->xAxis->setTickPen(QPen(Qt::white, 1));
  ui->plot->yAxis->setTickPen(QPen(Qt::white, 1));
  ui->plot->xAxis->setSubTickPen(QPen(Qt::white, 1));
  ui->plot->yAxis->setSubTickPen(QPen(Qt::white, 1));
  ui->plot->xAxis->setTickLabelColor(Qt::white);
  ui->plot->yAxis->setTickLabelColor(Qt::white);
  ui->plot->xAxis->grid()->setPen(QPen(QColor(140, 140, 140), 1, Qt::DotLine));
  ui->plot->yAxis->grid()->setPen(QPen(QColor(140, 140, 140), 1, Qt::DotLine));
  ui->plot->xAxis->grid()->setSubGridPen(
      QPen(QColor(80, 80, 80), 1, Qt::DotLine));
  ui->plot->yAxis->grid()->setSubGridPen(
      QPen(QColor(80, 80, 80), 1, Qt::DotLine));
  ui->plot->xAxis->grid()->setSubGridVisible(true);
  ui->plot->yAxis->grid()->setSubGridVisible(true);
  ui->plot->xAxis->grid()->setZeroLinePen(Qt::NoPen);
  ui->plot->yAxis->grid()->setZeroLinePen(Qt::NoPen);
  ui->plot->xAxis->setUpperEnding(QCPLineEnding::esSpikeArrow);
  ui->plot->yAxis->setUpperEnding(QCPLineEnding::esSpikeArrow);
  ui->plot->setBackground(plotGradient);
  ui->plot->axisRect()->setBackground(axisRectGradient);

  auto plot_pen = ui->plot->graph(0)->pen();
  plot_pen.setWidthF(line_width);
  ui->plot->graph(0)->setPen(plot_pen);

  // make left and bottom axes transfer their ranges to right and top axes:
  connect(ui->plot->xAxis, SIGNAL(rangeChanged(QCPRange)), ui->plot->xAxis2,
          SLOT(setRange(QCPRange)));
  connect(ui->plot->yAxis, SIGNAL(rangeChanged(QCPRange)), ui->plot->yAxis2,
          SLOT(setRange(QCPRange)));

  // setup a timer that repeatedly calls MainWindow::realtimeDataSlot:
  connect(&dataTimer, SIGNAL(timeout()), this, SLOT(realtimePlot()));
  dataTimer.start(0); // Interval 0 means to refresh as fast as possible
}

RealtimePlotter::~RealtimePlotter() { delete ui; }
