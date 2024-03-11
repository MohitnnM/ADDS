#ifndef ROCK_H
#define ROCK_H

#include "Move.h"
#include <iostream>
using namespace std;

class Rock : public Move {
public:
    string getName() const override;
    vector<string> getAttacks() const override;
};

#endif
