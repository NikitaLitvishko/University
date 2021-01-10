#include"Student.h"

Student::Student():Human(){};

Student::Student(QString name,QString surname,QString group_name,std::vector<Subject*> student_subjects):Human(name,surname)
{
    this->group_name = group_name;
    this->student_subjects = student_subjects;
}

std::vector<Subject*> Student::getStudent_subjects()
{
    return this->student_subjects;
}

QString Student::getGroup_name()
{
    return this->group_name;
}

void Student::setGroup_name(QString group_name)
{
    this->group_name = group_name;
}

void Student::setStudent_subjects(std::vector<Subject*> student_subjects)
{
    this->student_subjects = student_subjects;
}

