#include "quad_obj.h"
#include "ui_quad_obj.h"

quad_obj::quad_obj(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::quad_obj)
{
    ui->setupUi(this);
}

quad_obj::~quad_obj()
{
    delete ui;
}
