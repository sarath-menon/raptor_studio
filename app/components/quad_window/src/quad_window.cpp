#include "quad_window.h"
#include "ui_quad_window.h"

QuadWindow::QuadWindow(QWidget *parent)
    : QWidget(parent), ui(new Ui::QuadWindow) {
  ui->setupUi(this);
}

QuadWindow::~QuadWindow() { delete ui; }
