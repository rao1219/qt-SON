#ifndef USER_H
#define USER_H


class User
{
public:
    User();
    int ap_label;
    double receivePower;
    double SINR;
    void init(int ap_label,double receivePower,double SINR);
};

#endif // USER_H
