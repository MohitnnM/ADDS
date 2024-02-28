#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
using namespace std;

class Player{
    public:
        Player(){}
        virtual char makeMove() = 0;
        virtual string getName() = 0;
};




#endif