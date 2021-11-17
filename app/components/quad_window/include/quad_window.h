#ifndef QUAD_OBJ_H
#define QUAD_OBJ_H

#include <QWidget>

namespace Ui {
class QuadWindow;
}

class QuadWindow : public QWidget {
  Q_OBJECT

public:
  explicit QuadWindow(QWidget *parent = nullptr);
  ~QuadWindow();

private:
  Ui::QuadWindow *ui;
};

#endif // QUAD_OBJ_H
