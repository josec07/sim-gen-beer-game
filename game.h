#ifndef GAME_H
#define GAME_H

#include <string>
#include <unordered_map>

enum class Role {
    RETAILER,
    WHOLESALER,
    DISTRIBUTOR,
    FACTORY
};

class Player {

public:

    Role role;
    std::string getRoleAsString() const;

};

#endif //GAME_H 