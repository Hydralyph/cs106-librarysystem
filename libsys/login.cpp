#include "login.h"
#include "ui_login.h"
#include <QMessageBox>

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_login_clicked()
{
    QString username = ui->userField->text();
    QString password = ui->passField->text();

    if (username == "Test" && password == "Test") {
        QMessageBox::information(this,"Login successful.","Logged in successfully.");
        this->close();
    }
    else {
        QMessageBox::warning(this,"Login unsuccessful.","Username and password are incorrect.");
    }

}

