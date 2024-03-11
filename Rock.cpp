#include "Rock.h"

string Rock::getName() const {
    return "Rock";
}

vector<string> Rock::getAttacks() const {
    return {"Scissors", "Zombie"};
}
