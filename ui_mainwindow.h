/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *user_enterCheckButton;
    QLabel *user_incorrect_password_login;
    QLineEdit *user_password_lineEdit;
    QLabel *user_password;
    QLineEdit *user_login_lineEdit;
    QLabel *user_login;
    QTableWidget *Students_Marks;
    QPushButton *add_horizontal_header;
    QLabel *horizontal_header_name;
    QLineEdit *horizontal_header_lineEdit;
    QPushButton *save_Data_button;
    QLabel *Subject_name;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 368);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        user_enterCheckButton = new QPushButton(centralwidget);
        user_enterCheckButton->setObjectName(QString::fromUtf8("user_enterCheckButton"));
        user_enterCheckButton->setGeometry(QRect(500, 240, 211, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(14);
        user_enterCheckButton->setFont(font);
        user_incorrect_password_login = new QLabel(centralwidget);
        user_incorrect_password_login->setObjectName(QString::fromUtf8("user_incorrect_password_login"));
        user_incorrect_password_login->setEnabled(true);
        user_incorrect_password_login->setGeometry(QRect(50, 220, 371, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setWeight(50);
        user_incorrect_password_login->setFont(font1);
        user_incorrect_password_login->setLayoutDirection(Qt::LeftToRight);
        user_incorrect_password_login->setTextFormat(Qt::AutoText);
        user_incorrect_password_login->setAlignment(Qt::AlignCenter);
        user_password_lineEdit = new QLineEdit(centralwidget);
        user_password_lineEdit->setObjectName(QString::fromUtf8("user_password_lineEdit"));
        user_password_lineEdit->setGeometry(QRect(390, 149, 201, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(18);
        user_password_lineEdit->setFont(font2);
        user_password = new QLabel(centralwidget);
        user_password->setObjectName(QString::fromUtf8("user_password"));
        user_password->setGeometry(QRect(180, 140, 171, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(24);
        font3.setBold(false);
        font3.setWeight(50);
        user_password->setFont(font3);
        user_password->setLayoutDirection(Qt::LeftToRight);
        user_password->setTextFormat(Qt::AutoText);
        user_password->setAlignment(Qt::AlignCenter);
        user_login_lineEdit = new QLineEdit(centralwidget);
        user_login_lineEdit->setObjectName(QString::fromUtf8("user_login_lineEdit"));
        user_login_lineEdit->setGeometry(QRect(390, 89, 201, 31));
        user_login_lineEdit->setFont(font2);
        user_login = new QLabel(centralwidget);
        user_login->setObjectName(QString::fromUtf8("user_login"));
        user_login->setGeometry(QRect(180, 70, 161, 71));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Verdana"));
        font4.setPointSize(24);
        user_login->setFont(font4);
        user_login->setLayoutDirection(Qt::LeftToRight);
        user_login->setTextFormat(Qt::AutoText);
        user_login->setAlignment(Qt::AlignCenter);
        Students_Marks = new QTableWidget(centralwidget);
        Students_Marks->setObjectName(QString::fromUtf8("Students_Marks"));
        Students_Marks->setGeometry(QRect(30, 40, 741, 192));
        add_horizontal_header = new QPushButton(centralwidget);
        add_horizontal_header->setObjectName(QString::fromUtf8("add_horizontal_header"));
        add_horizontal_header->setGeometry(QRect(110, 310, 211, 31));
        add_horizontal_header->setFont(font);
        horizontal_header_name = new QLabel(centralwidget);
        horizontal_header_name->setObjectName(QString::fromUtf8("horizontal_header_name"));
        horizontal_header_name->setGeometry(QRect(-20, 240, 261, 71));
        horizontal_header_name->setFont(font2);
        horizontal_header_name->setLayoutDirection(Qt::LeftToRight);
        horizontal_header_name->setTextFormat(Qt::AutoText);
        horizontal_header_name->setAlignment(Qt::AlignCenter);
        horizontal_header_lineEdit = new QLineEdit(centralwidget);
        horizontal_header_lineEdit->setObjectName(QString::fromUtf8("horizontal_header_lineEdit"));
        horizontal_header_lineEdit->setGeometry(QRect(220, 260, 251, 31));
        horizontal_header_lineEdit->setFont(font2);
        save_Data_button = new QPushButton(centralwidget);
        save_Data_button->setObjectName(QString::fromUtf8("save_Data_button"));
        save_Data_button->setGeometry(QRect(510, 300, 221, 31));
        save_Data_button->setFont(font);
        Subject_name = new QLabel(centralwidget);
        Subject_name->setObjectName(QString::fromUtf8("Subject_name"));
        Subject_name->setGeometry(QRect(210, -20, 381, 71));
        Subject_name->setFont(font2);
        Subject_name->setLayoutDirection(Qt::LeftToRight);
        Subject_name->setTextFormat(Qt::AutoText);
        Subject_name->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        user_enterCheckButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\205\321\226\320\264", nullptr));
        user_incorrect_password_login->setText(QCoreApplication::translate("MainWindow", "\320\235\320\265\320\262\321\226\321\200\320\275\320\270\320\271 \320\273\320\276\320\263\321\226\320\275 \321\207\320\270 \320\277\320\260\321\200\320\276\320\273\321\214!", nullptr));
        user_password->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        user_login->setText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\321\226\320\275:", nullptr));
        add_horizontal_header->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \321\201\321\202\320\276\320\262\320\261\320\265\321\206\321\214", nullptr));
        horizontal_header_name->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260 \321\201\321\202\320\276\320\262\320\277\321\206\321\217:", nullptr));
        save_Data_button->setText(QCoreApplication::translate("MainWindow", "\320\227\320\261\320\265\321\200\320\265\320\263\321\202\320\270 \320\267\320\274\321\226\320\275\320\270", nullptr));
        Subject_name->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
