#ifndef HUMAN_H
#define HUMAN_H
#include <QString>
#endif // HUMAN_H
#pragma once

class Human
{
private:
    QString name;
    QString surname;
public:
    Human();
    Human(QString name,QString surname);
    void setName(QString name);
    void setSurname(QString surname);
    QString getName();
    QString getSurname();
};
