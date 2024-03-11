#ifndef PIRATE_H
#define PIRATE_H

#include "Move.h"
#include <iostream>
using namespace std;

class Pirate : public Move {
    public:
        string getName() const override;
        vector<string> getAttacks() const override;
};

#endif
