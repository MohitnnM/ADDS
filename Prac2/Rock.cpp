#include "Rock.h"

std::vector<std::string> Rock::getAttack() const {
    return {"Scissors", "Zombie"};
}

std::string Rock::getName() const{
    return "Rock";
}