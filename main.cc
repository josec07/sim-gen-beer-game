#include "game.h"
#include "player.h"
#include <iostream>

int main() {
    Player player;

    std::cout << "Player defaults: " << player.getPlayerDefaults() << std::endl;
    std::cout << "Player role: " << player.getRoleAsString() << std::endl;

    return 0;
}