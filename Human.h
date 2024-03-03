#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <iostream>
using namespace std;

class Human:public Player{
    private:
        string name;
    public:
        Human(string playerName = "Human");
        char makeMove();
        string getName();
};




#endif