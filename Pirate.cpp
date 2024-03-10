#include "Pirate.h"

string Pirate::getName() {
    return "Pirate";
}

bool Pirate::beats(Move* otherMove) {
    string otherMoveName = otherMove->getName();
    return (otherMoveName == "Robot" || otherMoveName == "Monkey");
}