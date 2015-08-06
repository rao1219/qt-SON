#include "user.h"

User::User()
{

}
void User::init(int ap_label, double receivePower, double SINR)
{
    this->ap_label = ap_label;
    this->receivePower = receivePower;
    this->SINR =  SINR;
}
