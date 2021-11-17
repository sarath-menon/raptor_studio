#pragma once

#include <QStatusBar>
#include <QString>
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
  int scroll_speed_{5};

  // scrren refresing [in seconds]
  float refresh_time_{0.040};

  // Graph value
  float y_val_{};

  // axes titles
  QString xaxis_title_{"time"};
  QString yaxis_title_{"data"};

  // Axes range
  float xaxis_range_max{5};
  float xaxis_range_min{-5};

  // Plot line width
  constexpr static float line_width{2.5};

public slots:
  void update_plot();

  // Set scrolling speed of realtime plot
  void set_scroll_speed(const float scroll_speed) {
    scroll_speed_ = scroll_speed;
  }

  // Set refresh time for realtime plot
  void set_refresh_time(const float refresh_time) {
    refresh_time_ = refresh_time;
  }

  // Set ttime series data (y axis value) of reatime plot
  void set_y_val(const float y_val) { y_val_ = y_val; }

  // Set x axis title
  void set_xaxis_title(const QString xaxis_title) {
    xaxis_title_ = xaxis_title;
  }

  // Set y axis title
  void set_yaxis_title(const QString yaxis_title) {
    yaxis_title_ = yaxis_title;
  }

public:
  /// Getter function
  const int &scroll_speed() const { return scroll_speed_; }

  /// Getter function
  const float &refresh_time() const { return refresh_time_; }
};
