#include "Zombie.h"

string Zombie::getName() {
    return "Zombie";
}

bool Zombie::beats(Move* otherMove) {
    string otherMoveName = otherMove->getName();
    return (otherMoveName == "Pirate" || otherMoveName == "Monkey");
}