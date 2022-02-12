#include "bookdetails.h"
#include "ui_bookdetails.h"

bookdetails::bookdetails(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bookdetails)
{
    ui->setupUi(this);
}

bookdetails::~bookdetails()
{
    delete ui;
}
