#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

class Human:public Player{
    private:
        string name;
    public:
        Human(const string& playerName = "Human");
        Move* makeMove() const override;
        string getName() const override;
};
#endif