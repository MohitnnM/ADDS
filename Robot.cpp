#include "Robot.h"

string Robot::getName() {
    return "Robot";
}

bool Robot::beats(Move* otherMove) {
    string otherMoveName = otherMove->getName();
    return (otherMoveName == "Ninja" || otherMoveName == "Zombie");
}