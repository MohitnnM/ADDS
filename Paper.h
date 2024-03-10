#ifndef PAPER_H
#define PAPER_H

#include "Move.h"

class Paper : public Move {
public:
    string getName() override;
    bool beats(Move* otherMove) override;
};

#endif