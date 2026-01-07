#include "game.h"
#include <unordered_map>


std::string Player::getRoleAsString() const {
    //role is key, string is value
    static const std::unordered_map<Role, std::string> roleToString = {
        {Role::RETAILER, "retailer"},
        {Role::WHOLESALER, "wholesaler"},
        {Role::DISTRIBUTOR, "distributor"},
        {Role::FACTORY, "factory"}
    };

    auto it = roleToString.find(role);
    if(it != roleToString.end()){
        return it->second;
    }
    return "unknown";

}