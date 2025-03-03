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
#include <QtGui/QIcon>
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
    QLabel *labelUserSprite;
    QLabel *labelRoboSprite;
    QLabel *labelBackground;
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
        rockButton->setGeometry(QRect(110, 370, 121, 61));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Sprites/human_rock.png"), QSize(), QIcon::Normal, QIcon::Off);
        rockButton->setIcon(icon);
        rockButton->setIconSize(QSize(64, 54));
        paperButton = new QPushButton(centralwidget);
        paperButton->setObjectName(QString::fromUtf8("paperButton"));
        paperButton->setGeometry(QRect(320, 370, 121, 61));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Sprites/human_paper.png"), QSize(), QIcon::Normal, QIcon::Off);
        paperButton->setIcon(icon1);
        paperButton->setIconSize(QSize(64, 64));
        scissorsButton = new QPushButton(centralwidget);
        scissorsButton->setObjectName(QString::fromUtf8("scissorsButton"));
        scissorsButton->setGeometry(QRect(520, 370, 121, 61));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Sprites/human_scissor.png"), QSize(), QIcon::Normal, QIcon::Off);
        scissorsButton->setIcon(icon2);
        scissorsButton->setIconSize(QSize(64, 64));
        computerChoiceLabel = new QLabel(centralwidget);
        computerChoiceLabel->setObjectName(QString::fromUtf8("computerChoiceLabel"));
        computerChoiceLabel->setGeometry(QRect(10, 490, 311, 21));
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(10, 510, 321, 20));
        userScoreLCD = new QLCDNumber(centralwidget);
        userScoreLCD->setObjectName(QString::fromUtf8("userScoreLCD"));
        userScoreLCD->setGeometry(QRect(150, 90, 121, 81));
        userScoreLCD->setAutoFillBackground(true);
        computerScoreLCD = new QLCDNumber(centralwidget);
        computerScoreLCD->setObjectName(QString::fromUtf8("computerScoreLCD"));
        computerScoreLCD->setGeometry(QRect(500, 90, 121, 81));
        computerScoreLCD->setAutoFillBackground(true);
        userScoreLabel = new QLabel(centralwidget);
        userScoreLabel->setObjectName(QString::fromUtf8("userScoreLabel"));
        userScoreLabel->setGeometry(QRect(100, -40, 230, 150));
        userScoreLabel->setPixmap(QPixmap(QString::fromUtf8(":/Sprites/score_human.png")));
        userScoreLabel->setScaledContents(true);
        computerScoreLabel = new QLabel(centralwidget);
        computerScoreLabel->setObjectName(QString::fromUtf8("computerScoreLabel"));
        computerScoreLabel->setGeometry(QRect(450, -40, 230, 150));
        computerScoreLabel->setPixmap(QPixmap(QString::fromUtf8(":/Sprites/score_robot.png")));
        computerScoreLabel->setScaledContents(true);
        quitButton = new QPushButton(centralwidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setGeometry(QRect(320, 470, 121, 61));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Sprites/button_quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        quitButton->setIcon(icon3);
        quitButton->setIconSize(QSize(64, 64));
        labelUserSprite = new QLabel(centralwidget);
        labelUserSprite->setObjectName(QString::fromUtf8("labelUserSprite"));
        labelUserSprite->setGeometry(QRect(110, 170, 170, 170));
        labelUserSprite->setScaledContents(false);
        labelRoboSprite = new QLabel(centralwidget);
        labelRoboSprite->setObjectName(QString::fromUtf8("labelRoboSprite"));
        labelRoboSprite->setGeometry(QRect(480, 170, 170, 170));
        labelBackground = new QLabel(centralwidget);
        labelBackground->setObjectName(QString::fromUtf8("labelBackground"));
        labelBackground->setGeometry(QRect(0, 0, 801, 581));
        labelBackground->setPixmap(QPixmap(QString::fromUtf8(":/Sprites/blackBG.png")));
        labelBackground->setScaledContents(true);
        RPSGame->setCentralWidget(centralwidget);
        labelBackground->raise();
        rockButton->raise();
        paperButton->raise();
        scissorsButton->raise();
        computerChoiceLabel->raise();
        resultLabel->raise();
        userScoreLCD->raise();
        computerScoreLCD->raise();
        userScoreLabel->raise();
        computerScoreLabel->raise();
        quitButton->raise();
        labelUserSprite->raise();
        labelRoboSprite->raise();
        menubar = new QMenuBar(RPSGame);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
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
        userScoreLabel->setText(QString());
        computerScoreLabel->setText(QString());
        quitButton->setText(QCoreApplication::translate("RPSGame", "Quit", nullptr));
        labelUserSprite->setText(QString());
        labelRoboSprite->setText(QString());
        labelBackground->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RPSGame: public Ui_RPSGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RPSGAME_H
