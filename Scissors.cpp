#include "Scissors.h"

string Scissors::getName() {
    return "Scissors";
}

bool Scissors::beats(Move* otherMove) {
    string otherMoveName = otherMove->getName();
    return (otherMoveName == "Paper" || otherMoveName == "Zombie");
}