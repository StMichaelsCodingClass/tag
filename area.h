#ifndef AREA_HEADER
#define AREA_HEADER
#include<string>
#include<vector>
#include "character.h"
#include "item.h"
#include "masterclass.h"

class Area:public MasterClass{
    public:
       std::string description;
       std::vector<Character> characters;
       std::vector<Item> items;
       void describe();
};

Area getZombieLand();
Area getForest();
#endif
