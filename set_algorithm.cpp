#include "set_algorithm.h"
#include <QDebug>
#include <math.h>
#include <QGraphicsItem>
#include <QList>
#include <exception>
#define ADAPT 23

using namespace std;
Set_algorithm::Set_algorithm()
{

}
double Set_algorithm::getResultPower()
{
    double resultPower;
    Dot mapDot[400][400];
/*
    qDebug()<<"choice"<<this->choice<<endl;
    qDebug()<<"cover"<<this->coverRate<<endl;
    qDebug()<<"power"<<this->power<<endl;
    qDebug()<<"respo"<<this->RESP0<<endl;
*/
    qDebug()<<"a: "<<this->a<<endl;
    this->d0=this->getD0(this->a,this->b,this->SINR,this->RESP0,this->power);
    this->l0=this->getL0();
    qDebug()<<"l0: "<<this->l0<<endl;
    qDebug()<<"d0: "<<this->d0<<endl;


    _x=8;
    _y=8;

    for(int i=0;i<400;i++){
        for(int j=0;j<400;j++){
            mapDot[i][j].x=(i-200)*_x;
            mapDot[i][j].y=(j-200)*_y;
            mapDot[i][j].isValid=false;
    //        qDebug()<<mapDot[i][j].x<<" "<<mapDot[i][j].y<<endl;
        }
    }


    for(int i=-1;i<=1;i++){
        newAP = new AP();
        newAP->frequency=1;
        newAP->setX(0);newAP->setY(i*sqrt(3)*l0);
        apList.append(newAP);
        blueList.append(newAP);
    }



    for(int i=-1;i<=1;i=i+2){
        for(int j=-1;j<=1;j=j+2){
            newAP = new AP();
            newAP->frequency=1;
            newAP->setX(-3.0/2*i*l0);newAP->setY(j*0.5*sqrt(3)*l0);
            apList.append(newAP);
            blueList.append(newAP);
        }
    }

    newAP = new AP();
    newAP->frequency=6;
    newAP->setX(-2*l0);newAP->setY(0);
    apList.append(newAP);
    redList.append(newAP);

    for(int j=-1;j<=1;j=j+2){
        newAP = new AP();
        newAP->frequency=6;
        newAP->setX(-1.0/2*l0);newAP->setY(j*0.5*sqrt(3)*l0);
        qDebug()<<newAP->x();
        apList.append(newAP);
        redList.append(newAP);
    }

    for(int j=-1;j<=1;j++){
        newAP = new AP();
        newAP->frequency=6;
        newAP->setX(l0);newAP->setY(j*sqrt(3)*l0);
        apList.append(newAP);
        redList.append(newAP);
    }

    newAP = new AP();
    newAP->frequency=11;
    newAP->setX(2*l0);newAP->setY(0);
    apList.append(newAP);
    yellowList.append(newAP);

    for(int j=-1;j<=1;j=j+2){
        newAP = new AP();
        newAP->frequency=11;
        newAP->setX(1.0/2*l0);newAP->setY(j*0.5*sqrt(3)*l0);
        apList.append(newAP);
        yellowList.append(newAP);
    }

    for(int j=-1;j<=1;j++){
        newAP = new AP();
        newAP->frequency=11;
        newAP->setX(-1*l0);newAP->setY(j*sqrt(3)*l0);
        apList.append(newAP);
        yellowList.append(newAP);
    }

    qDebug()<<"_x _y: "<<_x<<" "<<_y<<endl;

    if(choice==2){

        double dis;
        QList<double> validPower;
        QList<int> labelNum;
        QList<double> eerList;
        int notValid=0;
        for(double po=this->power;po>=this->power-1;po=po-0.1)
        {
            for(int k=0;k<400;k++){
                for(int j=0;j<400;j++){
                    for(int m=0;m<apList.size();m++){
                        AP *currentAp = apList.at(m);
                        dis=sqrt((mapDot[k][j].x-currentAp->x())*(mapDot[k][j].x-currentAp->x())+(mapDot[k][j].y-currentAp->y())*(mapDot[k][j].y-currentAp->y()));
                        mapDot[k][j].receivePower=po-this->a*log(dis)-this->b;
                        if(mapDot[k][j].receivePower>=(this->RESP0)-ADAPT){
                            mapDot[k][j].isValid=true;
                        }

                    }
                }
            }
            int total_label=0;
            for(int k=0;k<400;k++){
                for(int j=0;j<400;j++){
                    if(mapDot[k][j].isValid==true)
                        total_label++;
                }
            }
            double label_rate = total_label*1.0/(400*400);
            qDebug()<<"覆盖数："<<total_label<<endl;
            qDebug()<<"覆盖率："<<label_rate<<endl;

            for(int i=0;i<400;i++){
                for(int j=0;j<400;j++){
                    mapDot[i][j].isValid=false;
                }
            }

            if(label_rate>=(this->coverRate*1.0)/100)
            {
                qDebug()<<"有效功率："<<po<<endl;
                validPower.append(po);
                labelNum.append(total_label);
                notValid=0;
            }
            else{
                break;
            }
        }
        double eer;
        double maxEEr=0;
        int maxEErlabel=0;
        for(int i=0;i<validPower.size();i++){
            qDebug()<<validPower.at(i)<<endl;
            eer=validPower.at(i)*19/labelNum.at(i)*(_x*_y);
            if(eer>maxEEr){
                maxEEr=eer;
                maxEErlabel=i;
            }
            eerList.append(eer);
        }
        this->resultEEr = maxEEr;
        resultPower = validPower.at(maxEErlabel);
        qDebug()<<"result:"<<resultPower<<endl;
    }
    else if(this->choice==1)
    {
        double dis;
        QList<double> validPower;
        QList<int> labelNum;
        QList<double> SINRList;
        int notValid=0;
        for(double po=this->power;po>=this->power-1;po=po-0.1)
        {
            for(int k=0;k<400;k++){
                for(int j=0;j<400;j++){
                    mapDot[k][j].ganraoPower=0;
                    double temp=-111111111111;
                    for(int m=0;m<apList.size();m++){
                        mapDot[k][j].receivePower=-111111111111;
                        AP *currentAp = apList.at(m);
                        dis=sqrt((mapDot[k][j].x-currentAp->x())*(mapDot[k][j].x-currentAp->x())+(mapDot[k][j].y-currentAp->y())*(mapDot[k][j].y-currentAp->y()));
                        temp=po-this->a*log(dis)-this->b;
                        if(temp>mapDot[k][j].receivePower){
                            mapDot[k][j].receivePower=temp;
                            mapDot[k][j].frequency=apList.at(m)->frequency;

                        }

                        if(mapDot[k][j].receivePower>=(this->RESP0)-ADAPT){
                            mapDot[k][j].isValid=true;
                        }
                    }
                    for(int m=0;m<apList.size();m++){
                        mapDot[k][j].receivePower=-1111111111111;
                        AP *currentAp = apList.at(m);
                        dis=sqrt((mapDot[k][j].x-currentAp->x())*(mapDot[k][j].x-currentAp->x())+(mapDot[k][j].y-currentAp->y())*(mapDot[k][j].y-currentAp->y()));
                        temp=po-this->a*log(dis)-this->b;
                        if(temp>mapDot[k][j].receivePower){
                            mapDot[k][j].receivePower=temp;
                            mapDot[k][j].frequency=apList.at(m)->frequency;
                        }

                        if(mapDot[k][j].receivePower>=(this->RESP0)-ADAPT){
                            mapDot[k][j].isValid=true;
                        }

                    }
                    temp=0;
                    for(int m=0;m<apList.size();m++){
                        int fre=mapDot[k][j].frequency;
                        AP *currentAp = apList.at(m);
                        if(currentAp->frequency==fre)
                        {
                            dis=sqrt((mapDot[k][j].x-currentAp->x())*(mapDot[k][j].x-currentAp->x())+(mapDot[k][j].y-currentAp->y())*(mapDot[k][j].y-currentAp->y()));
                            temp+=po-this->a*log(dis)-this->b;
                        }
                    }
                    temp=temp-mapDot[k][j].receivePower;
                    mapDot[k][j].ganraoPower=temp;
                    mapDot[k][j].SINR=mapDot[k][j].receivePower/mapDot[k][j].ganraoPower;

                }
                //cerr<<clock()<<endl;
            }
            int total_label=0;
            double SINR_total=0;
            for(int k=0;k<400;k++){
                for(int j=0;j<400;j++){
                    if(mapDot[k][j].isValid==true)
                    {
                        //mapDot[k][j].receivePower;
                        SINR_total+=mapDot[k][j].SINR;
                        total_label++;
                    }
                }
            }
            double power_SINR = SINR_total/total_label;
            double label_rate = total_label*1.0/(400*400);
            qDebug()<<"覆盖数："<<total_label<<endl;
            qDebug()<<"覆盖率："<<label_rate<<endl;

            for(int i=0;i<400;i++){
                for(int j=0;j<400;j++){
                    mapDot[i][j].isValid=false;
                }
            }

            if(label_rate>=(this->coverRate*1.0)/100)
            {
                qDebug()<<"有效功率："<<po<<endl;
                validPower.append(po);
                labelNum.append(total_label);
                SINRList.append(power_SINR);
                notValid=0;
            }
            else{
                break;
            }

        }
        double maxSINR=-111111;
        int label=0;
        for(int i=0;i<SINRList.size();i++){
            if(SINRList.at(i)>maxSINR){
                maxSINR=SINRList.at(i);
                label=i;
            }
        }
        resultPower=validPower.at(label);
        qDebug()<<"result:"<<resultPower<<endl;
    }
    return resultPower;
}

double Set_algorithm::getD0(double a,double b,double SINR,int RESP0,int power)
{
    ratio =  exp((power-RESP0-b)*1.0/a);
   // qDebug<<QString::number(ratio)<<endl;
    double d0=ratio*exp(a*1.0/SINR)+ratio;
/*
    qDebug()<<"SINR="<<SINR<<endl;
    qDebug()<<"a*1.0/SINR="<<a*1.0/SINR<<endl;
    qDebug()<<"exp(a*1.0/SINR)="<<exp(a*1.0/SINR)<<endl;
    qDebug()<<"ratio="<<ratio<<endl;
    qDebug()<<"d0= "<<d0<<endl;
*/

    return d0;
}
double Set_algorithm::getL0()
{
    return this->d0/sqrt(3);
}

