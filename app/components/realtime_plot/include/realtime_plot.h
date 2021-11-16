#ifndef RealtimePlotter_H
#define RealtimePlotter_H

#include <QStatusBar>
#include <QTimer>
#include <QWidget>

namespace Ui {
class RealtimePlotter;
}

class RealtimePlotter : public QWidget {
  Q_OBJECT

public:
  explicit RealtimePlotter(QWidget *parent = nullptr);
  ~RealtimePlotter();

private:
  // Parameters
  // Distance to cover in plots [meters]
  constexpr static float x_range{5};
  constexpr static float y_range{5};
  constexpr static float z_range{5};

  // Plot line width
  constexpr static float line_width = 2.5;

private:
  Ui::RealtimePlotter *ui;

  // To keep track of time
  QTimer dataTimer;

  // status bar to show fps
  QStatusBar status_bar;

  // parameters
  // Scrolling spped [lower is more]
  constexpr static int scroll_speed = 5;
  // scrren refresing [in seconds]
  constexpr static float refresh_time = 0.040;

  // Graph value
  float y_val{};

public slots:
  void update_plot();
};

#endif // RealtimePlotter_H
