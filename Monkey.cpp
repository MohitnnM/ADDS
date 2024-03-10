#include "Monkey.h"

string Monkey::getName() {
    return "Monkey";
}

bool Monkey::beats(Move* otherMove) {
    string otherMoveName = otherMove->getName();
    return (otherMoveName == "Ninja" || otherMoveName == "Robot");
}