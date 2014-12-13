/********************************************************************************
** Form generated from reading UI file 'gameover.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOVER_H
#define UI_GAMEOVER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gameOver
{
public:
    QGroupBox *labelGroupBox;
    QVBoxLayout *verticalLayout;
    QLabel *gameOverLabel;
    QGroupBox *optionBox;
    QPushButton *againButton;
    QPushButton *exitButton;
    QGroupBox *scoreBox;
    QLabel *scoreLabel;
    QLabel *label;

    void setupUi(QWidget *gameOver)
    {
        if (gameOver->objectName().isEmpty())
            gameOver->setObjectName(QString::fromUtf8("gameOver"));
        gameOver->resize(500, 400);
        gameOver->setStyleSheet(QString::fromUtf8("background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);"));
        labelGroupBox = new QGroupBox(gameOver);
        labelGroupBox->setObjectName(QString::fromUtf8("labelGroupBox"));
        labelGroupBox->setGeometry(QRect(150, 150, 200, 100));
        labelGroupBox->setStyleSheet(QString::fromUtf8("selection-background-color: #ffaa00;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;"));
        verticalLayout = new QVBoxLayout(labelGroupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gameOverLabel = new QLabel(labelGroupBox);
        gameOverLabel->setObjectName(QString::fromUtf8("gameOverLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Berlin Sans FB"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        gameOverLabel->setFont(font);
        gameOverLabel->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"spacing: 1px; /* spacing between items in the tool bar */\n"
"background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"color: rgb(255, 170, 0)"));
        gameOverLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(gameOverLabel);

        optionBox = new QGroupBox(gameOver);
        optionBox->setObjectName(QString::fromUtf8("optionBox"));
        optionBox->setGeometry(QRect(190, 270, 120, 80));
        optionBox->setStyleSheet(QString::fromUtf8("selection-background-color: #ffaa00;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;"));
        againButton = new QPushButton(optionBox);
        againButton->setObjectName(QString::fromUtf8("againButton"));
        againButton->setGeometry(QRect(20, 14, 81, 21));
        againButton->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"spacing: 1px; /* spacing between items in the tool bar */\n"
"background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"color: rgb(255, 170, 0)"));
        exitButton = new QPushButton(optionBox);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(20, 44, 81, 21));
        exitButton->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"spacing: 1px; /* spacing between items in the tool bar */\n"
"background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"color: rgb(255, 170, 0)"));
        scoreBox = new QGroupBox(gameOver);
        scoreBox->setObjectName(QString::fromUtf8("scoreBox"));
        scoreBox->setGeometry(QRect(60, 30, 381, 91));
        scoreBox->setStyleSheet(QString::fromUtf8("selection-background-color: #ffaa00;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;"));
        scoreLabel = new QLabel(scoreBox);
        scoreLabel->setObjectName(QString::fromUtf8("scoreLabel"));
        scoreLabel->setGeometry(QRect(140, 20, 211, 51));
        scoreLabel->setFont(font);
        scoreLabel->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"spacing: 1px; /* spacing between items in the tool bar */\n"
"background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"color: rgb(255, 170, 0)"));
        scoreLabel->setAlignment(Qt::AlignCenter);
        label = new QLabel(scoreBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 101, 51));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"spacing: 1px; /* spacing between items in the tool bar */\n"
"background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"color: rgb(255, 170, 0)"));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(gameOver);
        QObject::connect(exitButton, SIGNAL(clicked()), gameOver, SLOT(close()));

        QMetaObject::connectSlotsByName(gameOver);
    } // setupUi

    void retranslateUi(QWidget *gameOver)
    {
        gameOver->setWindowTitle(QApplication::translate("gameOver", "Form", 0, QApplication::UnicodeUTF8));
        labelGroupBox->setTitle(QString());
        gameOverLabel->setText(QApplication::translate("gameOver", "Game Over", 0, QApplication::UnicodeUTF8));
        optionBox->setTitle(QString());
        againButton->setText(QApplication::translate("gameOver", "Try Again?", 0, QApplication::UnicodeUTF8));
        exitButton->setText(QApplication::translate("gameOver", "Exit", 0, QApplication::UnicodeUTF8));
        scoreBox->setTitle(QString());
        scoreLabel->setText(QString());
        label->setText(QApplication::translate("gameOver", "Score:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class gameOver: public Ui_gameOver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOVER_H
