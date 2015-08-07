#include "self_youhua.h"
#include <math.h>
#include <cstdlib>
#include<QDebug>

self_youhua::self_youhua()
{

}
void self_youhua::initUser()
{
    userList.clear();
    srand((int)time(NULL));
    User *tempUser;
    for(int j=0;j<10;j++){
        for (int i=0;i<10;i++)
        {
            tempUser= new User();
            tempUser->init(j,-110+rand()%10,5+rand()%10,(100+rand()%100)*1.0/100);
            userList.append(tempUser);
        }
    }
}

int self_youhua::checkSituation()
{
    for(int i=0;i<userList.size();i++)
    {
        qDebug()<<"userList.at(i)->ap_label:"<<userList.at(i)->ap_label<<endl;
        default_aplist.at(userList.at(i)->ap_label)->totalUser++;
        if(userList.at(i)->receivePower<-110)
        {
            userList.at(i)->satisfied=false;
            default_aplist.at(userList.at(i)->ap_label)->unsatisfiedNum++;
        }
    }

    for(int i=0;i<default_aplist.size();i++)
    {
        double unsatisfy_rate;
        if(default_aplist.at(i)->totalUser==0){
            unsatisfy_rate=0;
        }
        else{
            unsatisfy_rate = default_aplist.at(i)->unsatisfiedNum*1.0 / default_aplist.at(i)->totalUser;
        }
        qDebug()<<"default_aplist.at(i)->totalUser"<<default_aplist.at(i)->totalUser<<endl;
        qDebug()<<"unsatisfy: "<<unsatisfy_rate<<endl;
        if(unsatisfy_rate>0.2)
        {
            qDebug()<<"--触发欠覆盖自优化--"<<endl;
            return 1;
        }
    }


    for(int i=0;i<default_aplist.size();i++)
    {
        default_aplist.at(i)->unsatisfiedNum=0;
        if(userList.at(i)->SINR<10)
        {
            userList.at(i)->satisfied=false;
            default_aplist.at(userList.at(i)->ap_label)->unsatisfiedNum++;
        }
    }

    for(int i=0;i<default_aplist.size();i++)
    {
        double unsatisfy_rate;
        if(default_aplist.at(i)->totalUser==0){
            unsatisfy_rate=0;
        }
        else{
            unsatisfy_rate = default_aplist.at(i)->unsatisfiedNum*1.0 / default_aplist.at(i)->totalUser;
        }
        qDebug()<<"unsatisfy: "<<unsatisfy_rate<<endl;
        if(unsatisfy_rate>0.2)
        {
            qDebug()<<"--触发干扰自优化--"<<endl;
            return 2;
        }
    }

    QList<int> overLabel;
    for(int i=0;i<default_aplist.size();i++)
    {
        double totalSpeed=0;
        for(int j=0;j<userList.size();j++)
        {
            if(userList.at(j)->ap_label==i)
            {
                totalSpeed+=userList.at(j)->receivePower;
            }
        }
        if(totalSpeed>default_aplist.at(i)->total_wifiSpeed)
        {
            overLabel.append(i);
        }
    }

    for(int i=0;i<overLabel.size();i++)
    {
        int search = overLabel.at(i);
        double minReceive=11111111;
        int userLabel;
        for (int j=0;j<userList.size();j++)
        {
            if(userList.at(j)->ap_label==search)
            {
                if(userList.at(j)->receivePower<minReceive)
                {
                    minReceive=userList.at(j)->receivePower;
                    userLabel=j;
                }
            }
        }
        if(overLabel.size()!=0)
        {
            qDebug()<<"--触发容量自配置--"<<endl;
            qDebug()<<search<<" 当前用户最小接收功率"<<minReceive<<endl;
            qDebug()<<"用户位置："<<userLabel<<endl;
            return 3;
        }
    }

    return 0;
}

