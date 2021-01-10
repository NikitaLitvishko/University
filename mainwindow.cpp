#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtSql"
#include "QSqlQuery"
#include <QMainWindow>
#include <QMessageBox>
#include<Student.h>
#include<User.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    User_EnterVisible_true();
    Mark_Table_Visible_false();
    columns_added = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::User_EnterVisible_true()
{
    this->ui->user_login->setVisible(true);
    this->ui->user_password->setVisible(true);
    this->ui->user_login_lineEdit->setVisible(true);
    this->ui->user_password_lineEdit->setVisible(true);
    this->ui->user_incorrect_password_login->setVisible(false);
    this->ui->user_enterCheckButton->setVisible(true);
}

void MainWindow::User_EnterVisible_false()
{
    this->ui->user_login->setVisible(false);
    this->ui->user_password->setVisible(false);
    this->ui->user_login_lineEdit->setVisible(false);
    this->ui->user_password_lineEdit->setVisible(false);
    this->ui->user_incorrect_password_login->setVisible(false);
    this->ui->user_enterCheckButton->setVisible(false);
}

void MainWindow::Mark_Table_Visible_true(User *user)
{
    this->ui->Subject_name->setVisible(true);
    std::vector<Student*> students_vector;
    std::vector<Subject*> subjects_vector;
    std::vector<int> mas_marks;
    this->ui->Students_Marks->setVisible(true);
    this->ui->Students_Marks->setEnabled(true);
    this->ui->add_horizontal_header->setVisible(true);
    this->ui->add_horizontal_header->setEnabled(true);
    this->ui->horizontal_header_name->setVisible(true);
    this->ui->horizontal_header_lineEdit->setVisible(true);
    this->ui->save_Data_button->setVisible(true);
    this->ui->save_Data_button->setEnabled(true);
    QStringList horizontal_header;
    this->db.setDatabaseName("Humans.sqlite");
    this->db.open();
    if(this->user->get_Type_of_subject() == "Math")
    {
        this->ui->Subject_name->setText("Математика");
    QSqlQuery qry;
    QString query = "SELECT *FROM Math_columns_names";
    if(!qry.exec(query))
    {
        QMessageBox::information(this,"INFO","ERROR");
    }
    std::vector<QString> horizontal_header_names;
    qry.next();
    columns_inTable = qry.record().count();
    for(int i=0;i<columns_inTable - 1;i++)
    {
    horizontal_header_names.push_back(qry.value(i+1).toString());
    }
    horizontal_header.append("Ім'я");
    horizontal_header.append("Прізвище");
    horizontal_header.append("Група");
    for(int i=0;i<horizontal_header_names.size();i++)
    {
        horizontal_header.append(horizontal_header_names[i]);
    }
    for(int i=0;i<horizontal_header_names.size();i++)
    {
        horizontal_header.append(horizontal_header_names[i]);
    }
    this->ui->Students_Marks->setColumnCount(3+horizontal_header_names.size());
    this->ui->Students_Marks->setHorizontalHeaderLabels(horizontal_header);
    this->ui->Students_Marks->setShowGrid(true);
    this->ui->Students_Marks->setSelectionMode(QAbstractItemView::SingleSelection);
    for(int i = 0;i<horizontal_header_names.size();i++)
    {
        this->ui->Students_Marks->horizontalHeader()->resizeSection(3+i,110);
    }
    query = "SELECT *FROM Students_Math";

    if(!qry.exec(query))
    {
QMessageBox::information(this,"INFO","ERROR");
    }
    for(int i = 0;qry.next();i++)
    {
        for(int j=0;j<columns_inTable;j++)
        {
            mas_marks.push_back(qry.value(3+j).toInt());
        }
        subjects_vector.push_back(new Subject(mas_marks));
        students_vector.push_back(new Student(qry.value(1).toString(),qry.value(2).toString(),qry.value(3).toString(),subjects_vector));
        this->ui->Students_Marks->insertRow(i);
        this->ui->Students_Marks->setItem(i,0,new QTableWidgetItem(students_vector[i]->getName()));
        this->ui->Students_Marks->setItem(i,1,new QTableWidgetItem(students_vector[i]->getSurname()));
        this->ui->Students_Marks->setItem(i,2,new QTableWidgetItem(students_vector[i]->getGroup_name()));
        this->ui->Students_Marks->item(i,0)->setTextAlignment(Qt::AlignCenter);
        this->ui->Students_Marks->item(i,0)->setFlags(Qt::ItemIsEnabled);
        this->ui->Students_Marks->item(i,1)->setFlags(Qt::ItemIsEnabled);
        this->ui->Students_Marks->item(i,2)->setFlags(Qt::ItemIsEnabled);
        this->ui->Students_Marks->item(i,1)->setTextAlignment(Qt::AlignCenter);
        this->ui->Students_Marks->item(i,2)->setTextAlignment(Qt::AlignCenter);
        for(int j=0;j<columns_inTable - 1;j++)
        {
            this->ui->Students_Marks->setItem(i,j + 3,new QTableWidgetItem(qry.value(j+4).toString()));
            this->ui->Students_Marks->item(i,j + 3)->setTextAlignment(Qt::AlignCenter);
        }
    }
   }
    else if(this->user->get_Type_of_subject() == "Physic")
    {
        this->ui->Subject_name->setText("Фізика");
        QSqlQuery qry;
        QString query = "SELECT *FROM Physic_columns_names";
        if(!qry.exec(query))
        {
            QMessageBox::information(this,"INFO","ERROR");
        }
        std::vector<QString> horizontal_header_names;
        qry.next();
        columns_inTable = qry.record().count();
        for(int i=0;i<columns_inTable - 1;i++)
        {
        horizontal_header_names.push_back(qry.value(i+1).toString());
        }
        horizontal_header.append("Ім'я");
        horizontal_header.append("Прізвище");
        horizontal_header.append("Група");
        for(int i=0;i<horizontal_header_names.size();i++)
        {
            horizontal_header.append(horizontal_header_names[i]);
        }
        for(int i=0;i<horizontal_header_names.size();i++)
        {
            horizontal_header.append(horizontal_header_names[i]);
        }
        this->ui->Students_Marks->setColumnCount(3+horizontal_header_names.size());
        this->ui->Students_Marks->setHorizontalHeaderLabels(horizontal_header);
        this->ui->Students_Marks->setShowGrid(true);
        this->ui->Students_Marks->setSelectionMode(QAbstractItemView::SingleSelection);
        for(int i = 0;i<horizontal_header_names.size();i++)
        {
            this->ui->Students_Marks->horizontalHeader()->resizeSection(3+i,110);
        }
        query = "SELECT *FROM Students_Physic";

        if(!qry.exec(query))
        {
    QMessageBox::information(this,"INFO","ERROR");
        }
        for(int i = 0;qry.next();i++)
        {
            for(int j=0;j<columns_inTable;j++)
            {
                mas_marks.push_back(qry.value(3+j).toInt());
            }
            subjects_vector.push_back(new Subject(mas_marks));
            students_vector.push_back(new Student(qry.value(1).toString(),qry.value(2).toString(),qry.value(3).toString(),subjects_vector));
            this->ui->Students_Marks->insertRow(i);
            this->ui->Students_Marks->setItem(i,0,new QTableWidgetItem(students_vector[i]->getName()));
            this->ui->Students_Marks->setItem(i,1,new QTableWidgetItem(students_vector[i]->getSurname()));
            this->ui->Students_Marks->setItem(i,2,new QTableWidgetItem(students_vector[i]->getGroup_name()));
            this->ui->Students_Marks->item(i,0)->setTextAlignment(Qt::AlignCenter);
            this->ui->Students_Marks->item(i,0)->setFlags(Qt::ItemIsEnabled);
            this->ui->Students_Marks->item(i,1)->setFlags(Qt::ItemIsEnabled);
            this->ui->Students_Marks->item(i,2)->setFlags(Qt::ItemIsEnabled);
            this->ui->Students_Marks->item(i,1)->setTextAlignment(Qt::AlignCenter);
            this->ui->Students_Marks->item(i,2)->setTextAlignment(Qt::AlignCenter);
            for(int j=0;j<columns_inTable - 1;j++)
            {
                this->ui->Students_Marks->setItem(i,j + 3,new QTableWidgetItem(qry.value(j+4).toString()));
                this->ui->Students_Marks->item(i,j + 3)->setTextAlignment(Qt::AlignCenter);
            }
        }
    }
    else if(this->user->get_Type_of_subject() == "Biology")
    {
        this->ui->Subject_name->setText("Біологія");
        QSqlQuery qry;
        QString query = "SELECT *FROM Biology_columns_names";
        if(!qry.exec(query))
        {
            QMessageBox::information(this,"INFO","ERROR");
        }
        std::vector<QString> horizontal_header_names;
        qry.next();
        columns_inTable = qry.record().count();
        for(int i=0;i<columns_inTable - 1;i++)
        {
        horizontal_header_names.push_back(qry.value(i+1).toString());
        }
        horizontal_header.append("Ім'я");
        horizontal_header.append("Прізвище");
        horizontal_header.append("Група");
        for(int i=0;i<horizontal_header_names.size();i++)
        {
            horizontal_header.append(horizontal_header_names[i]);
        }
        for(int i=0;i<horizontal_header_names.size();i++)
        {
            horizontal_header.append(horizontal_header_names[i]);
        }
        this->ui->Students_Marks->setColumnCount(3+horizontal_header_names.size());
        this->ui->Students_Marks->setHorizontalHeaderLabels(horizontal_header);
        this->ui->Students_Marks->setShowGrid(true);
        this->ui->Students_Marks->setSelectionMode(QAbstractItemView::SingleSelection);
        for(int i = 0;i<horizontal_header_names.size();i++)
        {
            this->ui->Students_Marks->horizontalHeader()->resizeSection(3+i,110);
        }
        query = "SELECT *FROM Students_Biology";

        if(!qry.exec(query))
        {
    QMessageBox::information(this,"INFO","ERROR");
        }
        for(int i = 0;qry.next();i++)
        {
            for(int j=0;j<columns_inTable;j++)
            {
                mas_marks.push_back(qry.value(3+j).toInt());
            }
            subjects_vector.push_back(new Subject(mas_marks));
            students_vector.push_back(new Student(qry.value(1).toString(),qry.value(2).toString(),qry.value(3).toString(),subjects_vector));
            this->ui->Students_Marks->insertRow(i);
            this->ui->Students_Marks->setItem(i,0,new QTableWidgetItem(students_vector[i]->getName()));
            this->ui->Students_Marks->setItem(i,1,new QTableWidgetItem(students_vector[i]->getSurname()));
            this->ui->Students_Marks->setItem(i,2,new QTableWidgetItem(students_vector[i]->getGroup_name()));
            this->ui->Students_Marks->item(i,0)->setTextAlignment(Qt::AlignCenter);
            this->ui->Students_Marks->item(i,0)->setFlags(Qt::ItemIsEnabled);
            this->ui->Students_Marks->item(i,1)->setFlags(Qt::ItemIsEnabled);
            this->ui->Students_Marks->item(i,2)->setFlags(Qt::ItemIsEnabled);
            this->ui->Students_Marks->item(i,1)->setTextAlignment(Qt::AlignCenter);
            this->ui->Students_Marks->item(i,2)->setTextAlignment(Qt::AlignCenter);
            for(int j=0;j<columns_inTable - 1;j++)
            {
                this->ui->Students_Marks->setItem(i,j + 3,new QTableWidgetItem(qry.value(j+4).toString()));
                this->ui->Students_Marks->item(i,j + 3)->setTextAlignment(Qt::AlignCenter);
            }
        }
    }
    this->db.close();
}


void MainWindow::Mark_Table_Visible_false()
{
    this->ui->Subject_name->setVisible(false);
    this->ui->Students_Marks->setVisible(false);
    this->ui->Students_Marks->setEnabled(false);
    this->ui->add_horizontal_header->setVisible(false);
    this->ui->add_horizontal_header->setEnabled(false);
    this->ui->horizontal_header_name->setVisible(false);
    this->ui->horizontal_header_lineEdit->setVisible(false);
    this->ui->save_Data_button->setVisible(false);
    this->ui->save_Data_button->setEnabled(false);
}


void MainWindow::on_user_enterCheckButton_clicked()
{
        db.setDatabaseName("Users.sqlite");
        this->db.open();
        if(!this->db.isOpen())
        {
            QMessageBox::information(this,"ERROR","ERROR OPEN");
        }
        QSqlQuery qry;
        QString text = QString("SELECT *FROM User WHERE Login = :Login AND Password = :Password");
        qry.prepare(text);
        qry.bindValue(":Login",this->ui->user_login_lineEdit->text());
        qry.bindValue(":Password",this->ui->user_password_lineEdit->text());
        if(!qry.exec())
        {
            QMessageBox::information(this,"ERROR","ERROR EXEC");
        }
        qry.next();
        this->db.close();
        User *user = new User(qry.value(1).toString(),qry.value(2).toString(),qry.value(3).toString(),qry.value(4).toString());
        this->user = user;
        if(qry.value(0).typeName()){
            User_EnterVisible_false();
            if(user->get_Type_of_user() == "teacher")
            {
                Mark_Table_Visible_true(user);
            }
            else if(user->get_Type_of_user() == "student")
            {

            }
        }
        else{
             QMessageBox::information(this,"Error","Такого логина и пароля нету");
        }

}

void MainWindow::on_add_horizontal_header_clicked()
{
    if(this->ui->horizontal_header_lineEdit->text() != NULL)
    {
    this->ui->Students_Marks->insertColumn(this->ui->Students_Marks->columnCount());
    for(int i=0;i<this->ui->Students_Marks->rowCount();i++)
    {
        this->ui->Students_Marks->setItem(i,this->ui->Students_Marks->columnCount() - 1,new QTableWidgetItem());
    }
    this->ui->Students_Marks->setHorizontalHeaderItem(this->ui->Students_Marks->columnCount() - 1,new QTableWidgetItem(this->ui->horizontal_header_lineEdit->text()));
    this->ui->Students_Marks->horizontalHeader()->resizeSection(this->ui->Students_Marks->columnCount() - 1,110);
    columns_headers.push_back(this->ui->horizontal_header_lineEdit->text());
    this->ui->horizontal_header_lineEdit->setText("");
    columns_added++;
    }
}

void MainWindow::on_save_Data_button_clicked()
{
    this->db.setDatabaseName("Humans.sqlite");
    this->db.open();
    if(!this->db.isOpen())
    {
        QMessageBox::information(this,"ERROR","DB NOT OPENED");
    }
    QString text;
    QSqlQuery qry;
    for(int i=0;i<columns_added;i++)
    {
        if(this->user->get_Type_of_subject() == "Math")
        {
    text= QString("ALTER TABLE Math_columns_names ADD COLUMN Mark_" + QString::number(columns_inTable + i) + " TEXT");
    if(!qry.exec(text))
    {
        QMessageBox::information(this,"ERROR","ERROR EXEC");
    }
    text = "UPDATE Math_columns_names SET Mark_" + QString::number(columns_inTable + i) + " = " + "'" + columns_headers[i] + "'" + " WHERE id = 1";
    if(!qry.exec(text))
    {
        QMessageBox::information(this,"ERROR","ERROR EXEC");
    }
    text = "ALTER TABLE Students_Math ADD COLUMN Mark_" + QString::number(columns_inTable + i) + " TEXT";
    if(!qry.exec(text))
    {
        QMessageBox::information(this,"ERROR","ERROR EXEC");
    }
        }
        else if(this->user->get_Type_of_subject() == "Physic")
        {
            text= QString("ALTER TABLE Physic_columns_names ADD COLUMN Mark_" + QString::number(columns_inTable + i) + " TEXT");
            if(!qry.exec(text))
            {
                QMessageBox::information(this,"ERROR","ERROR EXEC");
            }
            text = "UPDATE Physic_columns_names SET Mark_" + QString::number(columns_inTable + i) + " = " + "'" + columns_headers[i] + "'" + " WHERE id = 1";
            if(!qry.exec(text))
            {
                QMessageBox::information(this,"ERROR","ERROR EXEC");
            }
            text = "ALTER TABLE Students_Physic ADD COLUMN Mark_" + QString::number(columns_inTable + i) + " TEXT";
            if(!qry.exec(text))
            {
                QMessageBox::information(this,"ERROR","ERROR EXEC");
            }
        }
        else if(this->user->get_Type_of_subject() == "Biology")
        {
            text= QString("ALTER TABLE Biology_columns_names ADD COLUMN Mark_" + QString::number(columns_inTable + i) + " TEXT");
            if(!qry.exec(text))
            {
                QMessageBox::information(this,"ERROR","ERROR EXEC");
            }
            text = "UPDATE Biology_columns_names SET Mark_" + QString::number(columns_inTable + i) + " = " + "'" + columns_headers[i] + "'" + " WHERE id = 1";
            if(!qry.exec(text))
            {
                QMessageBox::information(this,"ERROR","ERROR EXEC");
            }
            text = "ALTER TABLE Students_Biology ADD COLUMN Mark_" + QString::number(columns_inTable + i) + " TEXT";
            if(!qry.exec(text))
            {
                QMessageBox::information(this,"ERROR","ERROR EXEC");
            }
        }
    }
    std::vector<QString> allRows;
    QMessageBox::information(this,"info",QString::number(this->ui->Students_Marks->columnCount()));
    for(int i=0;i<this->ui->Students_Marks->rowCount();i++)
    {
        for(int j=0;j<this->ui->Students_Marks->columnCount();j++)
        {
            if(this->ui->Students_Marks->item(i,j)->text() == NULL)
            {
                QMessageBox::information(this,"table","TRUE");
            }
            allRows.push_back(this->ui->Students_Marks->item(i,j)->text());
        }
    }

    for(int i=0;i<this->ui->Students_Marks->rowCount();i++)
    {
        if(this->user->get_Type_of_subject() == "Math")
        {
        text = "UPDATE Students_Math SET Student_name = :parametr, Student_surname = :parametr2, Group_name = :parametr3";
        }
        else if(this->user->get_Type_of_subject() == "Physic")
        {
            text = "UPDATE Students_Physic SET Student_name = :parametr, Student_surname = :parametr2, Group_name = :parametr3";
        }
        else if(this->user->get_Type_of_subject() == "Biology")
        {
            text = "UPDATE Students_Biology SET Student_name = :parametr, Student_surname = :parametr2, Group_name = :parametr3";
        }
        for(int j=0;j<this->ui->Students_Marks->columnCount() - 3;j++)
        {
          text += (", Mark_" + QString::number(j + 1) + " = :par" + QString::number(j));
        }
        text += " WHERE id = " + QString::number(i + 1);
        for(int j=0;j<this->ui->Students_Marks->columnCount();j++)
        {
            allRows.push_back(this->ui->Students_Marks->item(i,j)->text());
        }
        QMessageBox::information(this,"info",text);
        qry.prepare(text);
        qry.bindValue(":id", QString::number(i + 1));
        qry.bindValue(":parametr",allRows[0]);
        qry.bindValue(":parametr2",allRows[1]);
        qry.bindValue(":parametr3",allRows[2]);
        for(int j=0;j<this->ui->Students_Marks->columnCount() - 3;j++)
        {
            qry.bindValue(":par" + QString::number(j),allRows[j+3]);
        }
        allRows.clear();
        qry.exec();
    }

    this->db.close();
}

