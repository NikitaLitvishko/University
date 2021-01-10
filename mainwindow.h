#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "QtSql/QSqlDatabase"
#include "QSqlQuery"
#include <QMainWindow>
#include <QMessageBox>
#include"User.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QSqlDatabase db;
    int columns_added;
    int columns_inTable;
    std::vector<QString> columns_headers;
    User *user;

private slots:
    void on_user_enterCheckButton_clicked();

    void on_add_horizontal_header_clicked();

    void on_save_Data_button_clicked();

private:
    Ui::MainWindow *ui;
    void User_EnterVisible_true();
    void User_EnterVisible_false();
    void Mark_Table_Visible_true(User *user);
    void Mark_Table_Visible_false();
};
#endif // MAINWINDOW_H
