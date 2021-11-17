/********************************************************************************
** Form generated from reading UI file 'realtime_plot.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REALTIME_PLOT_H
#define UI_REALTIME_PLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_RealtimePlotter
{
public:
    QVBoxLayout *verticalLayout;
    QCustomPlot *plot;

    void setupUi(QWidget *RealtimePlotter)
    {
        if (RealtimePlotter->objectName().isEmpty())
            RealtimePlotter->setObjectName(QString::fromUtf8("RealtimePlotter"));
        RealtimePlotter->resize(955, 178);
        verticalLayout = new QVBoxLayout(RealtimePlotter);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        plot = new QCustomPlot(RealtimePlotter);
        plot->setObjectName(QString::fromUtf8("plot"));
        plot->setMinimumSize(QSize(955, 178));

        verticalLayout->addWidget(plot);


        retranslateUi(RealtimePlotter);

        QMetaObject::connectSlotsByName(RealtimePlotter);
    } // setupUi

    void retranslateUi(QWidget *RealtimePlotter)
    {
        RealtimePlotter->setWindowTitle(QApplication::translate("RealtimePlotter", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RealtimePlotter: public Ui_RealtimePlotter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REALTIME_PLOT_H
