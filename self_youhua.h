#ifndef SELF_YOUHUA_H
#define SELF_YOUHUA_H
#include <QList>
#include "ap.h"
#include "dot.h"
#include "user.h"


class self_youhua
{
public:
    self_youhua();
    void initUser();
    int checkSituation();
    QList<AP *> default_aplist;
    double defalt_ratio;
    QList<User *> userList;
};

#endif // SELF_YOUHUA_H
