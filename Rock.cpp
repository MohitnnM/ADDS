#include "Rock.h"

string Rock::getName() {
    return "Rock";
}

bool Rock::beats(Move* otherMove) {
    string otherMoveName = otherMove->getName();
    return (otherMoveName == "Scissors" || otherMoveName == "Zombie");
}