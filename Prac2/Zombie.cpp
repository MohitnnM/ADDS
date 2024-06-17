#include "Zombie.h"

std::vector<std::string> Zombie::getAttack() const {
    return {"Paper", "Monkey"};
}

std::string Zombie::getName() const{
    return "Zombie";
}