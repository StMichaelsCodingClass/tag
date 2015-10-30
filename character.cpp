#include "character.h"
#include <iostream>
using namespace std;

Character zombie(){
    Character Zombie;
    Zombie.health=10;
    Zombie.damage=3;
    Zombie.name="a zombie";
    Zombie.isPlayer=false;
    Zombie.maxhealth=10;
    return Zombie;
}

Character spiter(){
    Character Spiter;
    Spiter.health=9;
    Spiter.damage=4;
    Spiter.name="a Spiter";
    Spiter.maxhealth=9;
    Spiter.isPlayer=false;
    return Spiter;
}

Character getPlayer(){
    Character Newplayer;
    Newplayer.health=10;
    Newplayer.damage=4;
    Newplayer.isPlayer=true;
    Newplayer.maxhealth=10;
    cout<<"What do you want your name to be?"<<endl;
    cin>>Newplayer.name;
    return Newplayer;
}

Character Balooby(){
    Character Balooby;
    Balooby.health=14;
    Balooby.damage=5;
    Balooby.name="a Balooby";
    Balooby.maxhealth=14;
    Balooby.isPlayer=false;
    return Balooby;
}    

Character Spider(){
    Character Spider;
    Spider.health=6;
    Spider.damage=7;
    Spider.name="a spider";
    Spider.maxhealth=6;
    Spider.isPlayer=false;
    return Spider;
}
