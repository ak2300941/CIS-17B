/********************************************************************************
** Form generated from reading UI file 'highscore.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIGHSCORE_H
#define UI_HIGHSCORE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_highscore
{
public:
    QGroupBox *optionBox;
    QPushButton *backButton;
    QPushButton *exitButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *highscore)
    {
        if (highscore->objectName().isEmpty())
            highscore->setObjectName(QString::fromUtf8("highscore"));
        highscore->resize(500, 400);
        highscore->setStyleSheet(QString::fromUtf8("background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);"));
        optionBox = new QGroupBox(highscore);
        optionBox->setObjectName(QString::fromUtf8("optionBox"));
        optionBox->setGeometry(QRect(150, 260, 200, 60));
        optionBox->setStyleSheet(QString::fromUtf8("selection-background-color: #ffaa00;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;"));
        backButton = new QPushButton(optionBox);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(20, 20, 75, 23));
        backButton->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"spacing: 1px; /* spacing between items in the tool bar */\n"
"background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"color: rgb(255, 170, 0)"));
        exitButton = new QPushButton(optionBox);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(110, 20, 75, 23));
        exitButton->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"spacing: 1px; /* spacing between items in the tool bar */\n"
"background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"color: rgb(255, 170, 0)"));
        textEdit = new QTextEdit(highscore);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(100, 25, 300, 200));
        textEdit->setStyleSheet(QString::fromUtf8("border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"color: #b1b1b1;\n"
"font-size: 12px;"));
        textEdit->setReadOnly(true);

        retranslateUi(highscore);
        QObject::connect(exitButton, SIGNAL(clicked()), highscore, SLOT(close()));

        QMetaObject::connectSlotsByName(highscore);
    } // setupUi

    void retranslateUi(QWidget *highscore)
    {
        highscore->setWindowTitle(QApplication::translate("highscore", "Form", 0, QApplication::UnicodeUTF8));
        optionBox->setTitle(QString());
        backButton->setText(QApplication::translate("highscore", "Back", 0, QApplication::UnicodeUTF8));
        exitButton->setText(QApplication::translate("highscore", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class highscore: public Ui_highscore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIGHSCORE_H
