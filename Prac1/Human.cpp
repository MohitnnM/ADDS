#include "Human.h"
#include <iostream>

Human::Human(std::string playerName) : name(playerName) {}

char Human::makeMove(){
    char move;
    std::cout << "Enter Move: ";
    std::cin >> move;

    return move;
}


std::string Human::getName(){
    return name;
}