#ifndef QUAD_OBJ_H
#define QUAD_OBJ_H

#include <QWidget>

namespace Ui {
class quad_obj;
}

class quad_obj : public QWidget
{
    Q_OBJECT

public:
    explicit quad_obj(QWidget *parent = nullptr);
    ~quad_obj();

private:
    Ui::quad_obj *ui;
};

#endif // QUAD_OBJ_H
