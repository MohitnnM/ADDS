#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include <string>
#include <iostream>
#include "Rock.h" 

class Computer : public Player {
public:
    Computer();
    Move* makeMove() override;
    std::string getName() override;
};

#endif 
