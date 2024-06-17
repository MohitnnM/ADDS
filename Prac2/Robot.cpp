#include "Robot.h"

std::vector<std::string> Robot::getAttack() const {
    return {"Pirate", "Zombie"};
}

std::string Robot::getName() const{
    return "Robot";
}