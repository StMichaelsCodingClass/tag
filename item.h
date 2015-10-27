#ifndef ITEM_HEADER
#define ITEM_HEADER
#include <string>
#include "masterclass.h"

class Item:public MasterClass{
    public:
        int rangeDamage;
        int meleDamage;
        float faliurerate;
        int protection;
};

Item akThing();

#endif
