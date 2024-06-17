#include "Scissors.h"

std::vector<std::string> Scissors::getAttack() const {
    return {"Paper", "Zombie"};
}

std::string Scissors::getName() const{
    return "Scissors";
}