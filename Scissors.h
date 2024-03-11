#ifndef SCISSORS_H
#define SCISSORS_H

#include "Move.h"
using namespace std;
#include <iostream>

class Scissors : public Move {
    public:
        string getName() const override;
        vector<string> getAttacks() const override;
};

#endif
