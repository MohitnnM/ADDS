#include "Paper.h"

string Paper::getName() {
    return "Paper";
}

bool Paper::beats(Move* otherMove) {
    string otherMoveName = otherMove->getName();
    return (otherMoveName == "Rock" || otherMoveName == "Zombie");
}