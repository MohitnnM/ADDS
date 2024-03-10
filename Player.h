
#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Move.h"
#include <string>
using namespace std;

class Player{
    public:
        virtual ~Player() = default;
        virtual Move* makeMove() = 0;
        virtual string getName() const = 0;
};




#endif