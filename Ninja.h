#ifndef NINJA_H
#define NINJA_H

#include "Move.h"
#include <iostream>
using namespace std;

class Ninja : public Move {
    public:
        string getName() const override;
        vector<string> getAttacks() const override;
};

#endif
