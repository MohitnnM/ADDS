#ifndef PAPER_H
#define PAPER_H

#include "Move.h";

class Paper: public Move{
    public:
        std::string getName() const override;
        std::vector<std::string> getAttack() const override;
};

#endif