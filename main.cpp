#include "game.h"
#include <iostream>

int main (){
    Player player;
    player.role = Role::RETAILER;

    std::cout << "Player role: " << player.getRoleAsString() << std::endl;

    return 0;
}