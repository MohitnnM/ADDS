#ifndef PAPER_H
#define PAPER_H

#include "Move.h"
#include <iostream>
#include <string>

class Paper : public Move {
    public:
        Paper();
        string getName() const override;
};

#endif