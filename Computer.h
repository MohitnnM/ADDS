#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include <string>
#include <iostream>
#include "Rock.h" 

class Computer : public Player {
    public:
        Move* makeMove() const override;
        std::string getName() const override;
};

#endif 
