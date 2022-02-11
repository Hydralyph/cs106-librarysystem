#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "filesystem.h"
#include "login.h"
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



    // QFILE DEBUG CODE
//    qDebug() << "FILE EXISTS: " << FS::catalogueFile.exists();
//    if (!FS::catalogueFile.open(QIODevice::ReadOnly | QIODevice::Text))
//    {
//        QMessageBox::information(this, tr("FIRST: Unable to open file"), FS::catalogueFile.errorString());
//        return;
//    } else
//    {
//        qDebug() << "FIRST: File Opened.";
//        FS::catalogueFile.close();
//    }

//    QString applicationDirPath;
//        applicationDirPath = QCoreApplication::applicationDirPath();
//        qDebug()<<"applicationDirPath = "<<applicationDirPath;

//            QString applicationFilePath;
//            applicationFilePath = QCoreApplication::applicationFilePath();
//            qDebug()<<"applicationFilePath = "<<applicationFilePath;

//            QStringList bookData = FS::loadCatalogueData();
//            qDebug() << bookData;

    QStringList bookData = FS::loadCatalogueData();

for (int i = 0; i < 10; i++) {
    QGridLayout *Template = new QGridLayout();
    QLabel *Image = new QLabel();
    QLabel *Title = new QLabel();
    QLabel *Author = new QLabel();
    QLabel *Desc = new QLabel();


    Image->setText(bookData[0]);
    Title->setText(bookData[1]);
    Author->setText(bookData[2]);
    Desc->setText("lol");

    Template->addWidget(Image,0,0);
    Template->addWidget(Title,0,1);
    Template->addWidget(Author,1,1);
    Template->addWidget(Desc,2,1);
    scrollAlign->addLayout(Template);

};


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


