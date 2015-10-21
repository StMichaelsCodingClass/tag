#ifndef CHARACTER_HEADER
#define CHARACTER_HEADER
#include <string>
#include "masterclass.h"


class Character:public MasterClass{
    public:
        std::string name;
        int health;
        int maxhealth;
        int damage;
        bool isPlayer;
};

Character zombie();
#endif
