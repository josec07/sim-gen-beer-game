#ifndef GAME_H
#define GAME_H

#include <string>
#include <unordered_map>
#include <list>

enum class Role {
    RETAILER,
    WHOLESALER,
    DISTRIBUTOR,
    FACTORY
};

class Player {
private:
    Role role = Role::WHOLESALER;
    int inventory_ = 12;
    int backlog_ = 0;
    int order_placed_ = 4;
    int incoming_order_ = 0;
    float cost_ = 0.0;
    float total_cost_ = 0.0;
    bool is_human_ = false;
    std::list<int> shippping_delay;

public:
    Player() = default;

    std::string getRoleAsString() const;
    std::string getPlayerDefaults() const;

    int getInventory() const { return inventory_; }
    int getBacklog() const { return backlog_; }
    int getOrderPlaced() const { return order_placed_; }
    int getIncomingOrder() const { return incoming_order_; }
    float getCost() const { return cost_; }
    float getTotalCost() const { return total_cost_; }
    bool isHuman() const { return is_human_; }
    const std::list<int>& getShippingDelay() const { return shippping_delay; }
};

#endif // GAME_H