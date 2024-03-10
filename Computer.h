#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include "Rock.h" // Include the header file for the Rock move

class Computer : public Player {
public:
    Computer();
    Move* makeMove() override;
    std::string getName() override;
};

#endif // COMPUTER_H
