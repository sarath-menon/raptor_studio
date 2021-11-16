#pragma once

#include <QStatusBar>
#include <QTimer>
#include <QWidget>
#include <string>

namespace Ui {
class RealtimePlotter;
}

class RealtimePlotter : public QWidget {
  Q_OBJECT

public:
  explicit RealtimePlotter(QWidget *parent = nullptr);
  ~RealtimePlotter();

  // QT tyes
private:
  Ui::RealtimePlotter *ui;

  // To keep track of time
  QTimer dataTimer;

  // status bar to show fps
  QStatusBar status_bar;

  // parameters
private:
  // Scrolling spped [lower is more]
  int scroll_speed_ = 5;

  // scrren refresing [in seconds]
  float refresh_time_ = 0.040;

  // Graph value
  float y_val_{};

  // axes titles
  std::string x_title = "x_axis";
  std::string y_title = "time";

  // Axes range
  float x_range{5};
  float y_range{5};
  float z_range{5};

  // Plot line width
  constexpr static float line_width = 2.5;

public slots:
  void update_plot();

  // Set k_p gain
  void set_scroll_speed(float scroll_speed) { scroll_speed_ = scroll_speed; }

  // Set k_p gain
  void set_refresh_time(float refresh_time) { refresh_time_ = refresh_time; }

  // Set k_p gain
  void set_y_val(float y_val) { y_val_ = y_val; }

public:
  /// Getter function
  const int &scroll_speed() const { return scroll_speed_; }

  /// Getter function
  const float &refresh_time() const { return refresh_time_; }
};
