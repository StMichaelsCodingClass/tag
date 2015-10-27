#include "area.h"
#include "character.h"
#include <iostream>
using namespace std;

void Area::describe(){
    std::cout<<std::endl;
    cout<<"In "<<name<<endl;
    cout<<string(("***"+name).size()+1, '-')<<std::endl;
    cout<<description<<endl;
    cout<<"You see:"<<endl;
    for(auto i=characters.begin(); i!=characters.end(); i++){
        i->describe();
        cout<<endl;
    }
    for(auto i=items.begin(); i!=items.end(); i++){
        i->describe();
        cout<<endl;
    }
    std::cout<<std::endl;
}

Area getZombieLand(){
    Area ret;
    ret.name="The Zombie Land";
    ret.description="zombies spawn easily here";
    ret.characters.push_back(zombie());
    ret.characters.push_back(spiter());
    ret.characters.push_back(zombie());
    ret.items.push_back(akThing());
    return ret;
}
