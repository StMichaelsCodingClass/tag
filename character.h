#ifndef CHARACTER_HEADER
#define CHARACTER_HEADER
#include <string>
#include <vector>
#include "item.h"
#include "masterclass.h"


class Character:public MasterClass{
    public:
        int health;
        int maxhealth;
        int damage;
        bool isPlayer;
        std::vector<Item> items;
};

Character zombie();
Character spiter();
Character getPlayer();
#endif
