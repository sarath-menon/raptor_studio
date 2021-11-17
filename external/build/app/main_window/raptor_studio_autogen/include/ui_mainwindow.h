/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QFrame *left_menu;
    QVBoxLayout *verticalLayout_5;
    QPushButton *plotter_select_btn;
    QPushButton *jarvis_select_btn;
    QPushButton *parameters_select_btn;
    QPushButton *realtime_select_btn;
    QSpacerItem *verticalSpacer_2;
    QFrame *main_frame;
    QVBoxLayout *verticalLayout_6;
    QStackedWidget *app_pages;
    QWidget *plots_page;
    QVBoxLayout *verticalLayout_3;
    QCustomPlot *x_plot;
    QCustomPlot *y_plot;
    QCustomPlot *z_plot;
    QPushButton *clear_btn;
    QWidget *realtime_plots_page;
    QHBoxLayout *horizontalLayout_2;
    QFrame *plots_frame;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame_2;
    QWidget *jarvis_page;
    QVBoxLayout *verticalLayout_2;
    QFrame *parameters_frame;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QFrame *console_frame;
    QVBoxLayout *verticalLayout_7;
    QTextBrowser *console_window;
    QMenuBar *menuBar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1179, 640);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(28, 29, 73, 255), stop:0.50495 rgba(28, 29, 73, 255));\n"
""));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        left_menu = new QFrame(centralwidget);
        left_menu->setObjectName(QString::fromUtf8("left_menu"));
        left_menu->setMinimumSize(QSize(200, 0));
        left_menu->setFrameShape(QFrame::StyledPanel);
        left_menu->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(left_menu);
        verticalLayout_5->setSpacing(25);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(15, -1, 15, -1);
        plotter_select_btn = new QPushButton(left_menu);
        plotter_select_btn->setObjectName(QString::fromUtf8("plotter_select_btn"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(plotter_select_btn->sizePolicy().hasHeightForWidth());
        plotter_select_btn->setSizePolicy(sizePolicy);
        plotter_select_btn->setMinimumSize(QSize(0, 50));
        plotter_select_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));

        verticalLayout_5->addWidget(plotter_select_btn);

        jarvis_select_btn = new QPushButton(left_menu);
        jarvis_select_btn->setObjectName(QString::fromUtf8("jarvis_select_btn"));
        sizePolicy.setHeightForWidth(jarvis_select_btn->sizePolicy().hasHeightForWidth());
        jarvis_select_btn->setSizePolicy(sizePolicy);
        jarvis_select_btn->setMinimumSize(QSize(0, 50));
        jarvis_select_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));

        verticalLayout_5->addWidget(jarvis_select_btn);

        parameters_select_btn = new QPushButton(left_menu);
        parameters_select_btn->setObjectName(QString::fromUtf8("parameters_select_btn"));
        sizePolicy.setHeightForWidth(parameters_select_btn->sizePolicy().hasHeightForWidth());
        parameters_select_btn->setSizePolicy(sizePolicy);
        parameters_select_btn->setMinimumSize(QSize(0, 50));
        parameters_select_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));

        verticalLayout_5->addWidget(parameters_select_btn);

        realtime_select_btn = new QPushButton(left_menu);
        realtime_select_btn->setObjectName(QString::fromUtf8("realtime_select_btn"));
        sizePolicy.setHeightForWidth(realtime_select_btn->sizePolicy().hasHeightForWidth());
        realtime_select_btn->setSizePolicy(sizePolicy);
        realtime_select_btn->setMinimumSize(QSize(0, 50));
        realtime_select_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));

        verticalLayout_5->addWidget(realtime_select_btn);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);


        horizontalLayout_3->addWidget(left_menu);

        main_frame = new QFrame(centralwidget);
        main_frame->setObjectName(QString::fromUtf8("main_frame"));
        main_frame->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(28, 29, 73, 255), stop:0.50495 rgba(28, 29, 73, 255));\n"
""));
        main_frame->setFrameShape(QFrame::NoFrame);
        main_frame->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(main_frame);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        app_pages = new QStackedWidget(main_frame);
        app_pages->setObjectName(QString::fromUtf8("app_pages"));
        app_pages->setFrameShape(QFrame::NoFrame);
        plots_page = new QWidget();
        plots_page->setObjectName(QString::fromUtf8("plots_page"));
        verticalLayout_3 = new QVBoxLayout(plots_page);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        x_plot = new QCustomPlot(plots_page);
        x_plot->setObjectName(QString::fromUtf8("x_plot"));

        verticalLayout_3->addWidget(x_plot);

        y_plot = new QCustomPlot(plots_page);
        y_plot->setObjectName(QString::fromUtf8("y_plot"));

        verticalLayout_3->addWidget(y_plot);

        z_plot = new QCustomPlot(plots_page);
        z_plot->setObjectName(QString::fromUtf8("z_plot"));

        verticalLayout_3->addWidget(z_plot);

        clear_btn = new QPushButton(plots_page);
        clear_btn->setObjectName(QString::fromUtf8("clear_btn"));
        clear_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 233, 0);\n"
""));

        verticalLayout_3->addWidget(clear_btn);

        app_pages->addWidget(plots_page);
        realtime_plots_page = new QWidget();
        realtime_plots_page->setObjectName(QString::fromUtf8("realtime_plots_page"));
        horizontalLayout_2 = new QHBoxLayout(realtime_plots_page);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        plots_frame = new QFrame(realtime_plots_page);
        plots_frame->setObjectName(QString::fromUtf8("plots_frame"));
        plots_frame->setFrameShape(QFrame::StyledPanel);
        plots_frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(plots_frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 555, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        frame_2 = new QFrame(plots_frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_2);


        horizontalLayout_2->addWidget(plots_frame);

        app_pages->addWidget(realtime_plots_page);
        jarvis_page = new QWidget();
        jarvis_page->setObjectName(QString::fromUtf8("jarvis_page"));
        verticalLayout_2 = new QVBoxLayout(jarvis_page);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        parameters_frame = new QFrame(jarvis_page);
        parameters_frame->setObjectName(QString::fromUtf8("parameters_frame"));
        parameters_frame->setStyleSheet(QString::fromUtf8(""));
        parameters_frame->setFrameShape(QFrame::StyledPanel);
        parameters_frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(parameters_frame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(20, 20, 20, 20);
        verticalSpacer = new QSpacerItem(20, 551, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        verticalLayout_2->addWidget(parameters_frame);

        app_pages->addWidget(jarvis_page);

        verticalLayout_6->addWidget(app_pages);

        console_frame = new QFrame(main_frame);
        console_frame->setObjectName(QString::fromUtf8("console_frame"));
        console_frame->setFrameShape(QFrame::StyledPanel);
        console_frame->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(console_frame);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(10, 20, 10, 0);
        console_window = new QTextBrowser(console_frame);
        console_window->setObjectName(QString::fromUtf8("console_window"));
        console_window->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_7->addWidget(console_window);


        verticalLayout_6->addWidget(console_frame);


        horizontalLayout_3->addWidget(main_frame);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1179, 22));
        MainWindow->setMenuBar(menuBar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        plotter_select_btn->setText(QApplication::translate("MainWindow", "Plotter", nullptr));
        jarvis_select_btn->setText(QApplication::translate("MainWindow", "Jarvis", nullptr));
        parameters_select_btn->setText(QApplication::translate("MainWindow", "Parameters", nullptr));
        realtime_select_btn->setText(QApplication::translate("MainWindow", "realtime", nullptr));
        clear_btn->setText(QApplication::translate("MainWindow", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
