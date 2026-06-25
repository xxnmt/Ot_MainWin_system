#include "user_data.h"

User_Data::User_Data() {}
User_Data::User_Data(QString name,int age){
    User_Name=name;
    User_Age=age;
}
void User_Data::setAge(int age)
{
    User_Age=age;
}
void User_Data::setName(QString name){
    User_Name=name;
}

int User_Data::getAge(){return User_Age;}

QString User_Data::getName(){return User_Name;}