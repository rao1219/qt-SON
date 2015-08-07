#ifndef USER_H
#define USER_H


class User
{
public:
    User();
    int ap_label;
    double receivePower;
    double SINR;
    double wifiSpeed;
    bool satisfied;
    void init(int ap_label,double receivePower,double SINR,double wifiSpeed);

};

#endif // USER_H
