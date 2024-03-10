
#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
using namespace std;
#include "Player.h"

class Computer: public Player{
    public:
       virtual Move* makeMove();
       string getName();
};




#endif