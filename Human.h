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
        virtual Move* makeMove();
        string getName();
};




#endif