#ifndef RealtimePlotter_H
#define RealtimePlotter_H

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
  Ui::RealtimePlotter *ui;
};

#endif // RealtimePlotter_H
