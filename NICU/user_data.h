#ifndef USER_DATA_H
#define USER_DATA_H
#include<Qstring>
class User_Data
{
public:
    User_Data();
    User_Data(QString name,int age);
    void setName(QString name);
    void setAge(int age);
    QString getName();
    int getAge();
private:
    QString User_Name;
    int User_Age;

};

#endif // USER_DATA_H
