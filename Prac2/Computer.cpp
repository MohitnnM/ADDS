#include "Computer.h"
#include "Move.h"
#include "Rock.h"
#include <iostream>

Move* Computer::makeMove(){
    return new Rock;
}

std::string Computer::getName(){
    return("Computer");
}
