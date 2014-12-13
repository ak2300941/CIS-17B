/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gameWindow
{
public:
    QGraphicsView *graphicsView;
    QGroupBox *allGroupBox;
    QLabel *nameLabel;
    QLabel *scoreLabel;

    void setupUi(QWidget *gameWindow)
    {
        if (gameWindow->objectName().isEmpty())
            gameWindow->setObjectName(QString::fromUtf8("gameWindow"));
        gameWindow->resize(500, 500);
        gameWindow->setStyleSheet(QString::fromUtf8("background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);"));
        graphicsView = new QGraphicsView(gameWindow);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(50, 50, 400, 350));
        graphicsView->setStyleSheet(QString::fromUtf8(""));
        graphicsView->setInteractive(true);
        allGroupBox = new QGroupBox(gameWindow);
        allGroupBox->setObjectName(QString::fromUtf8("allGroupBox"));
        allGroupBox->setGeometry(QRect(50, 420, 401, 41));
        allGroupBox->setStyleSheet(QString::fromUtf8("selection-background-color: #ffaa00;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;"));
        nameLabel = new QLabel(allGroupBox);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(10, 10, 141, 21));
        nameLabel->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"spacing: 1px; /* spacing between items in the tool bar */\n"
"background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"color: rgb(255, 170, 0)"));
        nameLabel->setAlignment(Qt::AlignCenter);
        scoreLabel = new QLabel(allGroupBox);
        scoreLabel->setObjectName(QString::fromUtf8("scoreLabel"));
        scoreLabel->setGeometry(QRect(250, 10, 141, 21));
        scoreLabel->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"spacing: 1px; /* spacing between items in the tool bar */\n"
"background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"color: rgb(255, 170, 0)"));
        scoreLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(gameWindow);

        QMetaObject::connectSlotsByName(gameWindow);
    } // setupUi

    void retranslateUi(QWidget *gameWindow)
    {
        gameWindow->setWindowTitle(QApplication::translate("gameWindow", "Form", 0, QApplication::UnicodeUTF8));
        allGroupBox->setTitle(QString());
        nameLabel->setText(QString());
        scoreLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class gameWindow: public Ui_gameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
