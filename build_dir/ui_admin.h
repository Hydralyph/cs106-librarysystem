/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *addmod_Users;
    QPushButton *addmod_Books;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName(QString::fromUtf8("admin"));
        admin->resize(613, 457);
        gridLayoutWidget = new QWidget(admin);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(70, 120, 513, 191));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        addmod_Users = new QPushButton(gridLayoutWidget);
        addmod_Users->setObjectName(QString::fromUtf8("addmod_Users"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addmod_Users->sizePolicy().hasHeightForWidth());
        addmod_Users->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        addmod_Users->setFont(font);

        gridLayout->addWidget(addmod_Users, 0, 2, 1, 1);

        addmod_Books = new QPushButton(gridLayoutWidget);
        addmod_Books->setObjectName(QString::fromUtf8("addmod_Books"));
        sizePolicy.setHeightForWidth(addmod_Books->sizePolicy().hasHeightForWidth());
        addmod_Books->setSizePolicy(sizePolicy);
        addmod_Books->setFont(font);

        gridLayout->addWidget(addmod_Books, 0, 0, 1, 1);


        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Dialog", nullptr));
        addmod_Users->setText(QCoreApplication::translate("admin", "Add/Modify Users", nullptr));
        addmod_Books->setText(QCoreApplication::translate("admin", "Add/Modify Books", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
