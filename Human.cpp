#include"Human.h"

Human::Human(){};

Human::Human(QString name,QString surname)
{
    this->name = name;
    this->surname = surname;
}

void Human::setName(QString name)
{
    this->name = name;
}

void Human::setSurname(QString surname)
{
    this->surname = surname;
}

QString Human::getName()
{
    return this->name;
}

QString Human::getSurname()
{
    return this->surname;
}
