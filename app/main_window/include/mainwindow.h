#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "copilot.h"
#include "fastdds_thread.h"
#include "quad_obj.h"
#include "realtime_plot_thread.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

private slots:
  void on_realtime_select_btn_clicked();

private slots:
  void on_jarvis_select_btn_clicked();

private slots:
  void on_plotter_select_btn_clicked();

private slots:
  void on_clear_btn_clicked();

private:
  Ui::MainWindow *ui;

  // Fastdds objects
private:
  std::unique_ptr<fastdds_thread> fastdds_plot_thread;

  std::unique_ptr<RealtimePlotThread> x_pos_plos;

  // Parameters
  // Distance to cover in plots [meters]
  constexpr static float x_range{5};
  constexpr static float y_range{5};
  constexpr static float z_range{5};

  // Plot line width
  constexpr static float line_width = 2.5;

  // Quadcopter object
  quad_obj *quad_1;

  // Copilot object
  Copilot copilot_1;

  // // Realtime plotter
  // RealtimePlotter *plot_1;
};
#endif // MAINWINDOW_H
