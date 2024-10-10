#ifndef SHIELD_H
#define SHIELD_H
#include "item.h"

using namespace std;

class Shield : public Item{
    int m_defence;
public:
    Shield();
    Shield *createShield(const string &name , int shieldDf);
};

#endif // SHIELD_H
