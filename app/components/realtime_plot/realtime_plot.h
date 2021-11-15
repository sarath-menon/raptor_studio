#ifndef REALTIME_PLOT_H
#define REALTIME_PLOT_H

#include <QWidget>

namespace Ui {
class realtime_plot;
}

class realtime_plot : public QWidget
{
    Q_OBJECT

public:
    explicit realtime_plot(QWidget *parent = nullptr);
    ~realtime_plot();

private:
    Ui::realtime_plot *ui;
};

#endif // REALTIME_PLOT_H
