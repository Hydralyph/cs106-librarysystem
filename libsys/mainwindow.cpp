#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "filesystem.h"
#include "login.h"
#include "useraccountsystem.h"
#include "booksystem.h"
#include <QDebug>
#include <QVector>


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

//    QStringList bookData = FS::loadCatalogueData();

    // BECOMES A NULL PIXMAP
//    QPixmap img;
//    img.load(QString(QCoreApplication::applicationDirPath() + bookData[7]));
//    qDebug() << QCoreApplication::applicationDirPath();

    QVector<Book*> BookVec;

for (int i = 0; i < 30; i++) {
    QGridLayout *Template = new QGridLayout();
    QLabel *Image = new QLabel();
    QLabel *Title = new QLabel();
    QLabel *Author = new QLabel();
    QLabel *ISBN = new QLabel();
    QLabel *Desc = new QLabel();
    QFrame *line = new QFrame();

//    img = img.scaled(Image->size(), Qt::KeepAspectRatio);
//    Image->setPixmap(img);



    Book *book = new Book();
    book->SetTitle("Title");
    book->SetAuthor("Author");
    book->SetISBN("1222343");
    book->SetGenre1("Horror");
    book->SetGenre2("Mystery");
    book->SetIsAvailable(true);
    BookVec.push_back(book);


    Title->setText(BookVec.at(i)->GetTitle());
    Author->setText(BookVec.at(i)->GetAuthor());
    ISBN->setText(BookVec.at(i)->GetISBN());
    Desc->setText("lol");

    line->setFrameShape(QFrame::HLine);
    line->setFrameShadow(QFrame::Sunken);

    Template->addWidget(Image,0,0);
    Template->addWidget(Title,0,1);
    Template->addWidget(Author,1,1);
    Template->addWidget(ISBN, 2,1);
    Template->addWidget(Desc,3,1);
    Template->addWidget(line, 4,1);
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


