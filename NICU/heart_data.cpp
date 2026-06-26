#include "heart_data.h"

#define MAX_DATA 310

Heart_Data::Heart_Data() {}

Heart_Data::Heart_Data(const Heart_Data &t)
{
    User_ChannelName=t.getChannelName();
    for(int i=0;i<t.getDataArr().size();i++){
        User_DataArr.append(t.getDataArr().at(i));
    }
}

QString Heart_Data::getChannelName() const
{
    return User_ChannelName;
}

QJsonArray Heart_Data::getDataArr() const
{
    return User_DataArr;
}

void Heart_Data::setChannelName(QString name)
{
    User_ChannelName=name;
}

void Heart_Data::setDataArr(QJsonArray dataArr)
{
    for(int i=0;i<dataArr.size();i++){
        User_DataArr.append(dataArr.at(i));
    }
}

// heart_data.cpp
void Heart_Data::addData(int value)
{
    QJsonArray newArr = User_DataArr;
    newArr.append(value);

    // 限制数据量，防止内存溢出（保留最新2000个点）
    if (newArr.size() > MAX_DATA) {
        QJsonArray trimmed;
        for (int i = newArr.size() - MAX_DATA; i < newArr.size(); i++) {
            trimmed.append(newArr[i]);
        }
        newArr = trimmed;
    }

    User_DataArr = newArr;
}
