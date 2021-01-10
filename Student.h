#ifndef STUDENT_H
#define STUDENT_H
#include"Human.h"
#include"Subject.h"
#include<vector>
#pragma once
#endif // STUDENT_H

class Student:public Human
{
public:
    Student();
    Student(QString name,QString surname,QString group_name,std::vector<Subject*> student_subjects);
    std::vector<Subject*> getStudent_subjects();
    QString getGroup_name();
    void setGroup_name(QString group_name);
    void setStudent_subjects(std::vector<Subject*> student_subjects);
private:
    QString group_name;
    std::vector<Subject*> student_subjects;

};
