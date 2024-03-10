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
        Move* makeMove() override;
        string getName() override;
};




#endif