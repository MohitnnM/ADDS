#ifndef MOVE_H
#define MOVE_H

#include <string>
using namespace std;

class Move{
    public:
        virtual string getName() = 0;
        virtual bool beats(Move* otherMove) = 0;
};



#endif