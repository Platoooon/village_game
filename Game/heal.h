#ifndef HEAL_H
#define HEAL_H
#include "potion.h"

using namespace std;

class Heal : public Potion{
private :
   int  m_hp ;
public:
    Heal();
};

#endif // HEAL_H
