/********************************************************************************
** Form generated from reading UI file 'rpsgame.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RPSGAME_H
#define UI_RPSGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RPSGame
{
public:
    QWidget *centralwidget;
    QPushButton *rockButton;
    QPushButton *paperButton;
    QPushButton *scissorsButton;
    QLabel *computerChoiceLabel;
    QLabel *resultLabel;
    QLCDNumber *userScoreLCD;
    QLCDNumber *computerScoreLCD;
    QLabel *userScoreLabel;
    QLabel *computerScoreLabel;
    QPushButton *quitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RPSGame)
    {
        if (RPSGame->objectName().isEmpty())
            RPSGame->setObjectName(QString::fromUtf8("RPSGame"));
        RPSGame->resize(800, 600);
        centralwidget = new QWidget(RPSGame);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        rockButton = new QPushButton(centralwidget);
        rockButton->setObjectName(QString::fromUtf8("rockButton"));
        rockButton->setGeometry(QRect(120, 370, 121, 61));
        paperButton = new QPushButton(centralwidget);
        paperButton->setObjectName(QString::fromUtf8("paperButton"));
        paperButton->setGeometry(QRect(320, 370, 121, 61));
        scissorsButton = new QPushButton(centralwidget);
        scissorsButton->setObjectName(QString::fromUtf8("scissorsButton"));
        scissorsButton->setGeometry(QRect(520, 370, 121, 61));
        computerChoiceLabel = new QLabel(centralwidget);
        computerChoiceLabel->setObjectName(QString::fromUtf8("computerChoiceLabel"));
        computerChoiceLabel->setGeometry(QRect(220, 260, 311, 21));
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(220, 310, 321, 20));
        userScoreLCD = new QLCDNumber(centralwidget);
        userScoreLCD->setObjectName(QString::fromUtf8("userScoreLCD"));
        userScoreLCD->setGeometry(QRect(120, 50, 121, 81));
        computerScoreLCD = new QLCDNumber(centralwidget);
        computerScoreLCD->setObjectName(QString::fromUtf8("computerScoreLCD"));
        computerScoreLCD->setGeometry(QRect(510, 50, 121, 81));
        userScoreLabel = new QLabel(centralwidget);
        userScoreLabel->setObjectName(QString::fromUtf8("userScoreLabel"));
        userScoreLabel->setGeometry(QRect(120, 5, 121, 31));
        computerScoreLabel = new QLabel(centralwidget);
        computerScoreLabel->setObjectName(QString::fromUtf8("computerScoreLabel"));
        computerScoreLabel->setGeometry(QRect(510, 10, 121, 31));
        quitButton = new QPushButton(centralwidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setGeometry(QRect(320, 460, 121, 61));
        RPSGame->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RPSGame);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        RPSGame->setMenuBar(menubar);
        statusbar = new QStatusBar(RPSGame);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        RPSGame->setStatusBar(statusbar);

        retranslateUi(RPSGame);
        QObject::connect(quitButton, SIGNAL(clicked()), RPSGame, SLOT(close()));

        QMetaObject::connectSlotsByName(RPSGame);
    } // setupUi

    void retranslateUi(QMainWindow *RPSGame)
    {
        RPSGame->setWindowTitle(QCoreApplication::translate("RPSGame", "RPSGame", nullptr));
        rockButton->setText(QCoreApplication::translate("RPSGame", "Rock", nullptr));
        paperButton->setText(QCoreApplication::translate("RPSGame", "Paper", nullptr));
        scissorsButton->setText(QCoreApplication::translate("RPSGame", "Scissors", nullptr));
        computerChoiceLabel->setText(QCoreApplication::translate("RPSGame", "Computer chose ....", nullptr));
        resultLabel->setText(QCoreApplication::translate("RPSGame", "Result Awaited ....", nullptr));
        userScoreLabel->setText(QCoreApplication::translate("RPSGame", "     USER SCORE:", nullptr));
        computerScoreLabel->setText(QCoreApplication::translate("RPSGame", "COMPUTER SCORE:", nullptr));
        quitButton->setText(QCoreApplication::translate("RPSGame", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RPSGame: public Ui_RPSGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RPSGAME_H
