#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>

class Player{
    public:
        Player() {}
        virtual char makeMove() = 0;
        virtual std::string getName() = 0;
};

#endif