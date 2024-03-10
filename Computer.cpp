#include "Computer.h"
#include "Rock.h"

Computer::Computer() {}

Move* Computer::makeMove() {
    return new Rock(); // Always return a Rock move
}

std::string Computer::getName() {
    return "Computer";
}