#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <iostream>
using namespace std;

class Human{
    private:
        string name;
    public:
        Human::Human(string playerName = "Human");
        char makeMove();
        string getName();
};




#endif