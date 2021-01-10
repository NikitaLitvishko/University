#include "User.h"

User::User(){};

void User::setUser_name(QString user_name){
    this->user_name = user_name;
}

User::User(QString user_name,QString user_password,QString type_of_user,QString type_of_subject)
{
    this->user_name = user_name;
    this->user_password = user_password;
    this->type_of_user = type_of_user;
    this->type_of_subject = type_of_subject;
}

void User::setUser_password(QString user_password)
{
    this->user_password = user_password;
}

void User::setType_of_user(QString type_of_user)
{
    this->type_of_user = type_of_user;
}

void User::setType_of_subject(QString type_of_subject)
{
    this->type_of_subject = type_of_subject;
}

QString User::getUser_name()
{
    return this->user_name;
}

QString User::getUser_password()
{
    return this->user_password;
}

QString User::get_Type_of_user()
{
    return this->type_of_user;
}

QString User::get_Type_of_subject()
{
    return this->type_of_subject;
}
