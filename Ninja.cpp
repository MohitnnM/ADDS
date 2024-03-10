#include "Ninja.h"

string Ninja::getName() {
    return "Ninja";
}

bool Ninja::beats(Move* otherMove) {
    string otherMoveName = otherMove->getName();
    return (otherMoveName == "Pirate" || otherMoveName == "Zombie");
}