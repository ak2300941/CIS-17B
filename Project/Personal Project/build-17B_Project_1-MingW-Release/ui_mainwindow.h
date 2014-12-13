/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *mainmenuGroupBox;
    QPushButton *newButton;
    QPushButton *exitButton;
    QPushButton *highscoreButton;
    QGroupBox *titleBox;
    QLabel *gameTitle;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(500, 400);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        mainmenuGroupBox = new QGroupBox(centralWidget);
        mainmenuGroupBox->setObjectName(QString::fromUtf8("mainmenuGroupBox"));
        mainmenuGroupBox->setGeometry(QRect(180, 150, 131, 101));
        mainmenuGroupBox->setStyleSheet(QString::fromUtf8("selection-background-color: #ffaa00;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;"));
        newButton = new QPushButton(mainmenuGroupBox);
        newButton->setObjectName(QString::fromUtf8("newButton"));
        newButton->setGeometry(QRect(30, 10, 75, 23));
        newButton->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"spacing: 1px; /* spacing between items in the tool bar */\n"
"background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"color: rgb(255, 170, 0)"));
        exitButton = new QPushButton(mainmenuGroupBox);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(30, 70, 75, 23));
        exitButton->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"spacing: 1px; /* spacing between items in the tool bar */\n"
"background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"color: rgb(255, 170, 0)"));
        highscoreButton = new QPushButton(mainmenuGroupBox);
        highscoreButton->setObjectName(QString::fromUtf8("highscoreButton"));
        highscoreButton->setGeometry(QRect(30, 40, 75, 23));
        highscoreButton->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"spacing: 1px; /* spacing between items in the tool bar */\n"
"background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"color: rgb(255, 170, 0)"));
        titleBox = new QGroupBox(centralWidget);
        titleBox->setObjectName(QString::fromUtf8("titleBox"));
        titleBox->setGeometry(QRect(140, 40, 211, 80));
        titleBox->setStyleSheet(QString::fromUtf8("selection-background-color: #ffaa00;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;"));
        gameTitle = new QLabel(titleBox);
        gameTitle->setObjectName(QString::fromUtf8("gameTitle"));
        gameTitle->setGeometry(QRect(30, 20, 151, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Berlin Sans FB"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        gameTitle->setFont(font);
        gameTitle->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"spacing: 1px; /* spacing between items in the tool bar */\n"
"background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"color: rgb(255, 170, 0)"));
        gameTitle->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(exitButton, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        mainmenuGroupBox->setTitle(QString());
        newButton->setText(QApplication::translate("MainWindow", "New Game", 0, QApplication::UnicodeUTF8));
        exitButton->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        highscoreButton->setText(QApplication::translate("MainWindow", "Score", 0, QApplication::UnicodeUTF8));
        titleBox->setTitle(QString());
        gameTitle->setText(QApplication::translate("MainWindow", "Run", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
