#include <iostream>
#include "area.h"
#include "character.h"
#include "interpret.h"
using namespace std;

int main(){
    Area current=getZombieLand();
    Character player=getPlayer();
    for(;;){
        current.describe();
        interpret(current, player);
    }
    return 0;
}
