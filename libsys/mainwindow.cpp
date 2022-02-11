#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "filesystem.h"
#include "login.h"
#include "useraccountsystem.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    FS::SetFilenameOnStartup();
    ui->setupUi(this);


    QScrollArea *scrollField = ui->scrollArea;
    QVBoxLayout *scrollAlign = new QVBoxLayout();
    QFrame *inner = new QFrame();
    inner->setLayout(scrollAlign);
    scrollField->setWidget(inner);


//    scrollAlign->addLayout(ui->Entry_1);
//    scrollAlign->addLayout(ui->Entry_2);

    QStringList bookData = FS::loadCatalogueData();

    // BECOMES A NULL PIXMAP
//    QPixmap img;
//    img.load(QString(QCoreApplication::applicationDirPath() + bookData[7]));
//    qDebug() << QCoreApplication::applicationDirPath();


for (int i = 0; i < 10; i++) {
    QGridLayout *Template = new QGridLayout();
    QLabel *Image = new QLabel();
    QLabel *Title = new QLabel();
    QLabel *Author = new QLabel();
    QLabel *Desc = new QLabel();

//    img = img.scaled(Image->size(), Qt::KeepAspectRatio);
//    Image->setPixmap(img);



    Title->setText(bookData[1]);
    Author->setText(bookData[2]);
    Desc->setText("lol");

    Template->addWidget(Image,0,0);
    Template->addWidget(Title,0,1);
    Template->addWidget(Author,1,1);
    Template->addWidget(Desc,2,1);
    scrollAlign->addLayout(Template);


};

User *user = new User();

qDebug() << user->GetAccessLevel();


}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_loginbutton_clicked()
{
    Login loginWindow;
    loginWindow.setModal(true);
    loginWindow.exec();
}

