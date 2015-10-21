#include "character.h"

Character zombie(){
    Character Zombie;
    Zombie.health=10;
    Zombie.damage=3;
    Zombie.name="a zombie";
    Zombie.isPlayer=false;
    Zombie.maxhealth=10;
    return Zombie;
}

