#include "interpret.h"
#include <string>
#include <iostream>
using namespace std;

void interpret(Area& current, Character& player){
    std::string command;
    std::cout<<" >";
    std::cin>>command;
    if(command=="pickup"){
        int itemnumber;
        cin>>itemnumber;
        player.items.push_back(current.items[itemnumber]);
        current.items.erase(current.items.begin()+itemnumber);

    }

    if(command=="inventory"){
        std::cout<<std::endl;
        std::cout<<"Inventory"<<std::endl;
        std::cout<<"---------"<<std::endl;
        for(int i=0; i!=player.items.size();  i++){
            std::cout<<i<<": ";
            player.items[i].describe();
            std::cout<<std::endl;
        }
        std::cout<<std::endl;
    }
}
