#ifndef MONKEY_H
#define MONKEY_H

#include "Move.h"
using namespace std;
#include <iostream>

class Monkey : public Move {
    public:
        std::string getName() const override;
        std::vector<std::string> getAttacks() const override;
};

#endif
