#include "area.h"
#include "character.h"
#include <iostream>
using namespace std;

void Area::describe(){
    cout<<"In "<<name<<endl;
    cout<<description<<endl;
    cout<<"You see:"<<endl;
    for(auto i=characters.begin(); i!=characters.end(); i++){
        cout<<i->name<<endl;
    }
}

Area getZombieLand(){
    Area ret;
    ret.name="The Zombie Land";
    ret.description="zombies spawn easily here";
    ret.characters.push_back(zombie());
    ret.characters.push_back(zombie());
    return ret;
}
