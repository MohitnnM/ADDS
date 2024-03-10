#ifndef MONKEY_H
#define MONKEY_H

#include "Move.h"
#include <iostream>
#include <string>

class Monkey : public Move {
    public:
        Monkey();
        string getName() const override;
};

#endif 