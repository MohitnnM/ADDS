#include "Scissors.h"

string Scissors::getName() const {
    return "Scissors";
}

vector<string> Scissors::getAttacks() const {
    return {"Paper", "Zombie"};
}
