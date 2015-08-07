#include "user.h"

User::User()
{

}
void User::init(int ap_label,double receivePower,double SINR,double wifiSpeed)
{
    this->ap_label = ap_label;
    this->receivePower = receivePower;
    this->SINR =  SINR;
    this->wifiSpeed = wifiSpeed;
    this->satisfied=true;
}
