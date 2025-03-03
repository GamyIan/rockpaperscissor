#include "rpsgame.h"
#include "./ui_rpsgame.h"
#include "functions.h"
#include <iostream>

RPSGame::RPSGame(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RPSGame)
{
    ui->setupUi(this);
}

RPSGame::~RPSGame()
{
    delete ui;
}


void RPSGame::on_rockButton_clicked()
{
    extern int user_choice;
    extern int computer_choice;
    extern int user_score;
    extern int computer_score;
    extern int result;
    user_choice = 1;
    ui->labelUserSprite->setPixmap(QPixmap(":/Sprites/rock_human_combined.png"));
    ui->labelUserSprite->setScaledContents(true);
    computer_choice = computer_choice_generator();
    result = scoreboard_generator();
    // Displaying the computers choice on the screen
    if(computer_choice == 1) {
        ui->computerChoiceLabel->setText("The Computer chose Rock");
        ui->labelRoboSprite->setPixmap(QPixmap(":/Sprites/rock_combined.png"));
        ui->labelRoboSprite->setScaledContents(true);

    }
    if(computer_choice == 2) {
        ui->computerChoiceLabel->setText("The Computer chose Paper");
        ui->labelRoboSprite->setPixmap(QPixmap(":/Sprites/paper_combined.png"));
        ui->labelRoboSprite->setScaledContents(true);
    }
    if(computer_choice == 3) {
        ui->computerChoiceLabel->setText("The Computer chose Scissors");
        ui->labelRoboSprite->setPixmap(QPixmap(":/Sprites/scissors_combined.png"));
        ui->labelRoboSprite->setScaledContents(true);
    }
    // Displaying the result of the round on the screen
    if(result == 1) {
        ui->resultLabel->setText("The round has resulted in a Draw!!");
    }
    if(result == 2) {
        ui->resultLabel->setText("Congratulations!!, User wins this round.");
    }
    if(result == 3) {
        ui->resultLabel->setText("Better luck next time, Computer wins this round");
    }
    // Displaying the user and computer score on the screen
    ui->userScoreLCD->display(user_score);
    ui->computerScoreLCD->display(computer_score);
}


void RPSGame::on_paperButton_clicked()
{
    extern int user_choice;
    extern int computer_choice;
    extern int user_score;
    extern int computer_score;
    extern int result;
    user_choice = 2;
    ui->labelUserSprite->setPixmap(QPixmap(":/Sprites/paper_human_combined.png"));
    ui->labelUserSprite->setScaledContents(true);
    computer_choice = computer_choice_generator();
    result = scoreboard_generator();
    // Displaying the computers choice on the screen
    if(computer_choice == 1) {
        ui->computerChoiceLabel->setText("The Computer chose Rock");
        ui->labelRoboSprite->setPixmap(QPixmap(":/Sprites/rock_combined.png"));
        ui->labelRoboSprite->setScaledContents(true);
    }
    if(computer_choice == 2) {
        ui->computerChoiceLabel->setText("The Computer chose Paper");
        ui->labelRoboSprite->setPixmap(QPixmap(":/Sprites/paper_combined.png"));
        ui->labelRoboSprite->setScaledContents(true);
    }
    if(computer_choice == 3) {
        ui->computerChoiceLabel->setText("The Computer chose Scissors");
        ui->labelRoboSprite->setPixmap(QPixmap(":/Sprites/scissors_combined.png"));
        ui->labelRoboSprite->setScaledContents(true);
    }
    // Displaying the result of the round on the screen
    if(result == 1) {
        ui->resultLabel->setText("The round has resulted in a Draw!!");
    }
    if(result == 2) {
        ui->resultLabel->setText("Congratulations!!, User wins this round.");
    }
    if(result == 3) {
        ui->resultLabel->setText("Better luck next time, Computer wins this round");
    }
    // Displaying the user and computer score on the screen
    ui->userScoreLCD->display(user_score);
    ui->computerScoreLCD->display(computer_score);
}


void RPSGame::on_scissorsButton_clicked()
{
    extern int user_choice;
    extern int computer_choice;
    extern int user_score;
    extern int computer_score;
    extern int result;
    user_choice =3;
    ui->labelUserSprite->setPixmap(QPixmap(":/Sprites/scissors_human_combined.png"));
    ui->labelUserSprite->setScaledContents(true);
    computer_choice = computer_choice_generator();
    result = scoreboard_generator();
    // Displaying the computers choice on the screen
    if(computer_choice == 1) {
        ui->computerChoiceLabel->setText("The Computer chose Rock");
        ui->labelRoboSprite->setPixmap(QPixmap(":/Sprites/rock_combined.png"));
        ui->labelRoboSprite->setScaledContents(true);
    }
    if(computer_choice == 2) {
        ui->computerChoiceLabel->setText("The Computer chose Paper");
        ui->labelRoboSprite->setPixmap(QPixmap(":/Sprites/paper_combined.png"));
        ui->labelRoboSprite->setScaledContents(true);
    }
    if(computer_choice == 3) {
        ui->computerChoiceLabel->setText("The Computer chose Scissors");
        ui->labelRoboSprite->setPixmap(QPixmap(":/Sprites/scissors_combined.png"));
        ui->labelRoboSprite->setScaledContents(true);
    }
    // Displaying the result of the round on the screen
    if(result == 1) {
        ui->resultLabel->setText("The round has resulted in a Draw!!");
    }
    if(result == 2) {
        ui->resultLabel->setText("Congratulations!!, User wins this round.");
    }
    if(result == 3) {
        ui->resultLabel->setText("Better luck next time, Computer wins this round");
    }
    // Displaying the user and computer score on the screen
    ui->userScoreLCD->display(user_score);
    ui->computerScoreLCD->display(computer_score);
}
