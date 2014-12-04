/********************************************************************************
** Form generated from reading UI file 'settingmenu.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGMENU_H
#define UI_SETTINGMENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_settingMenu
{
public:
    QGroupBox *groupBoxDifficulty;
    QPushButton *easyButton;
    QPushButton *mediumButton;
    QPushButton *hardButton;
    QGroupBox *groupBoxName;
    QLabel *label;
    QLineEdit *nameLine;
    QPushButton *nameButton;
    QGroupBox *groupBoxDifficultyDescription;
    QLabel *difficultyLabel;
    QGroupBox *groupBoxChecklist;
    QCheckBox *checkDifficulty;
    QCheckBox *checkName;
    QPushButton *startButton;
    QGroupBox *groupBoxTitle;
    QLabel *menuTitle;

    void setupUi(QDialog *settingMenu)
    {
        if (settingMenu->objectName().isEmpty())
            settingMenu->setObjectName(QString::fromUtf8("settingMenu"));
        settingMenu->resize(500, 400);
        settingMenu->setStyleSheet(QString::fromUtf8("background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);"));
        groupBoxDifficulty = new QGroupBox(settingMenu);
        groupBoxDifficulty->setObjectName(QString::fromUtf8("groupBoxDifficulty"));
        groupBoxDifficulty->setGeometry(QRect(50, 120, 101, 141));
        groupBoxDifficulty->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0)"));
        easyButton = new QPushButton(groupBoxDifficulty);
        easyButton->setObjectName(QString::fromUtf8("easyButton"));
        easyButton->setGeometry(QRect(10, 20, 75, 23));
        easyButton->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"spacing: 1px; /* spacing between items in the tool bar */\n"
"background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"color: rgb(255, 170, 0)"));
        mediumButton = new QPushButton(groupBoxDifficulty);
        mediumButton->setObjectName(QString::fromUtf8("mediumButton"));
        mediumButton->setGeometry(QRect(10, 60, 75, 23));
        mediumButton->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"spacing: 1px; /* spacing between items in the tool bar */\n"
"background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"color: rgb(255, 170, 0)"));
        hardButton = new QPushButton(groupBoxDifficulty);
        hardButton->setObjectName(QString::fromUtf8("hardButton"));
        hardButton->setGeometry(QRect(10, 100, 75, 23));
        hardButton->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"spacing: 1px; /* spacing between items in the tool bar */\n"
"background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"color: rgb(255, 170, 0)"));
        groupBoxName = new QGroupBox(settingMenu);
        groupBoxName->setObjectName(QString::fromUtf8("groupBoxName"));
        groupBoxName->setGeometry(QRect(10, 290, 271, 80));
        groupBoxName->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0)"));
        label = new QLabel(groupBoxName);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 46, 13));
        nameLine = new QLineEdit(groupBoxName);
        nameLine->setObjectName(QString::fromUtf8("nameLine"));
        nameLine->setGeometry(QRect(50, 30, 131, 20));
        nameButton = new QPushButton(groupBoxName);
        nameButton->setObjectName(QString::fromUtf8("nameButton"));
        nameButton->setGeometry(QRect(190, 30, 75, 23));
        nameButton->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"spacing: 1px; /* spacing between items in the tool bar */\n"
"background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"color: rgb(255, 170, 0)"));
        groupBoxDifficultyDescription = new QGroupBox(settingMenu);
        groupBoxDifficultyDescription->setObjectName(QString::fromUtf8("groupBoxDifficultyDescription"));
        groupBoxDifficultyDescription->setGeometry(QRect(190, 160, 191, 71));
        groupBoxDifficultyDescription->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0)"));
        difficultyLabel = new QLabel(groupBoxDifficultyDescription);
        difficultyLabel->setObjectName(QString::fromUtf8("difficultyLabel"));
        difficultyLabel->setGeometry(QRect(10, 30, 171, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Berlin Sans FB"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        difficultyLabel->setFont(font);
        difficultyLabel->setStyleSheet(QString::fromUtf8("selection-background-color: #ffaa00;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;"));
        groupBoxChecklist = new QGroupBox(settingMenu);
        groupBoxChecklist->setObjectName(QString::fromUtf8("groupBoxChecklist"));
        groupBoxChecklist->setGeometry(QRect(290, 290, 191, 80));
        groupBoxChecklist->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0)"));
        checkDifficulty = new QCheckBox(groupBoxChecklist);
        checkDifficulty->setObjectName(QString::fromUtf8("checkDifficulty"));
        checkDifficulty->setGeometry(QRect(20, 20, 70, 17));
        checkDifficulty->setStyleSheet(QString::fromUtf8(""));
        checkDifficulty->setChecked(false);
        checkDifficulty->setAutoRepeat(false);
        checkName = new QCheckBox(groupBoxChecklist);
        checkName->setObjectName(QString::fromUtf8("checkName"));
        checkName->setGeometry(QRect(20, 50, 70, 17));
        checkName->setStyleSheet(QString::fromUtf8(""));
        startButton = new QPushButton(groupBoxChecklist);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(100, 30, 75, 23));
        startButton->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"spacing: 1px; /* spacing between items in the tool bar */\n"
"background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"color: rgb(255, 170, 0)"));
        groupBoxTitle = new QGroupBox(settingMenu);
        groupBoxTitle->setObjectName(QString::fromUtf8("groupBoxTitle"));
        groupBoxTitle->setGeometry(QRect(140, 49, 221, 71));
        groupBoxTitle->setStyleSheet(QString::fromUtf8("selection-background-color: #ffaa00;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;"));
        menuTitle = new QLabel(groupBoxTitle);
        menuTitle->setObjectName(QString::fromUtf8("menuTitle"));
        menuTitle->setGeometry(QRect(10, 10, 201, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Berlin Sans FB"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        menuTitle->setFont(font1);
        menuTitle->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"spacing: 1px; /* spacing between items in the tool bar */\n"
"background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"color: rgb(255, 170, 0)"));

        retranslateUi(settingMenu);

        QMetaObject::connectSlotsByName(settingMenu);
    } // setupUi

    void retranslateUi(QDialog *settingMenu)
    {
        settingMenu->setWindowTitle(QApplication::translate("settingMenu", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBoxDifficulty->setTitle(QApplication::translate("settingMenu", "Difficulty", 0, QApplication::UnicodeUTF8));
        easyButton->setText(QApplication::translate("settingMenu", "Easy", 0, QApplication::UnicodeUTF8));
        mediumButton->setText(QApplication::translate("settingMenu", "Medium", 0, QApplication::UnicodeUTF8));
        hardButton->setText(QApplication::translate("settingMenu", "Hard", 0, QApplication::UnicodeUTF8));
        groupBoxName->setTitle(QApplication::translate("settingMenu", "Nickname", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("settingMenu", "Name", 0, QApplication::UnicodeUTF8));
        nameLine->setText(QString());
        nameLine->setPlaceholderText(QApplication::translate("settingMenu", "Write your name here.", 0, QApplication::UnicodeUTF8));
        nameButton->setText(QApplication::translate("settingMenu", "Enter", 0, QApplication::UnicodeUTF8));
        groupBoxDifficultyDescription->setTitle(QApplication::translate("settingMenu", "Difficulty Description", 0, QApplication::UnicodeUTF8));
        difficultyLabel->setText(QString());
        groupBoxChecklist->setTitle(QApplication::translate("settingMenu", "Setup Checklist", 0, QApplication::UnicodeUTF8));
        checkDifficulty->setText(QApplication::translate("settingMenu", "Difficulty", 0, QApplication::UnicodeUTF8));
        checkName->setText(QApplication::translate("settingMenu", "Name", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("settingMenu", "Start Game", 0, QApplication::UnicodeUTF8));
        groupBoxTitle->setTitle(QString());
        menuTitle->setText(QApplication::translate("settingMenu", "<html><head/><body><p align=\"center\">Game Menu</p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class settingMenu: public Ui_settingMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGMENU_H
