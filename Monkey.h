#ifndef MONKEY_H
#define MONKEY_H

#include "Move.h"

class Monkey : public Move {
public:
    string getName() override;
    bool beats(Move* otherMove) override;
};

#endif 