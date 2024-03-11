#include "Paper.h"

string Paper::getName() const {
    return "Paper";
}

vector<std::string> Paper::getAttacks() const {
    return {"Rock", "Monkey"};
}
