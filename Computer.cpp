//Collaborated with RIley Wayne Lienert

#include "Computer.h"


Move* Computer::makeMove() const {
    return new Rock();
}

std::string Computer::getName() const {
    return "Computer";
}