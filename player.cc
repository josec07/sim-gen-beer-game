#include "game.h"
#include <unordered_map>
#include <string>

std::string Player::getRoleAsString() const {
    static const std::unordered_map<Role, std::string> roleToString = {
        {Role::RETAILER, "retailer"},
        {Role::WHOLESALER, "wholesaler"},
        {Role::DISTRIBUTOR, "distributor"},
        {Role::FACTORY, "factory"}
    };

    auto it = roleToString.find(role);
    if (it != roleToString.end()) {
        return it->second;
    }
    return "unknown";
}

std::string Player::getPlayerDefaults() const {
    return "Role: " + getRoleAsString() + ", Inventory: " + std::to_string(inventory_);
}

