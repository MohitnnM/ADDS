#ifndef MOVE_H
#define MOVE_H

#include <string>
using namespace std;

class Move{
    public:
        virtual ~Move() {}
        virtual string getName() = 0;
};



#endif