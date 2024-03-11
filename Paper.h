#ifndef PAPER_H
#define PAPER_H

#include "Move.h"
#include <iostream>
using namespace std;

class Paper : public Move {
    public:
        string getName() const override;
        vector<string> getAttacks() const override;
};

#endif 
