#include"Subject.h"

Subject::Subject(){};

Subject::Subject(std::vector<int> mas_marks)
{
    this->mas_marks = mas_marks;
}

Subject::Subject(QString subject_name,std::vector<QString> mas_names_marks,std::vector<int> mas_marks)
{
    this->subject_name = subject_name;
    this->mas_names_marks = mas_names_marks;
    this->mas_marks = mas_marks;
}

void Subject::setSubject_name(QString subject_name)
{
    this->subject_name = subject_name;
}

void Subject::setMas_marks(std::vector<int> mas_marks)
{
    this->mas_marks = mas_marks;
}

void Subject::setMas_names_marks(std::vector<QString> mas_names_marks)
{
    this->mas_names_marks = mas_names_marks;
}

QString Subject::getSubject_name()
{
    return this->subject_name;
}

std::vector<QString> Subject::getMas_names_marks()
{
    return this->mas_names_marks;
}

std::vector<int> Subject::getMas_marks()
{
    return this->mas_marks;
}
