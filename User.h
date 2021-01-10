#ifndef USER_H
#define USER_H
#include<QString>
#pragma once
#endif // USER_H

class User
{
private:
    QString user_name;
    QString user_password;
    QString type_of_user;
    QString type_of_subject;
public:
    User();
    User(QString user_name,QString user_password,QString type_of_user,QString type_of_subject);
    void setUser_name(QString user_name);
    void setUser_password(QString user_password);
    void setType_of_user(QString type_of_user);
    void setType_of_subject(QString type_of_subject);
    QString getUser_name();
    QString getUser_password();
    QString get_Type_of_user();
    QString get_Type_of_subject();
};
