#ifndef REFREE_H
#define REFREE_H

#include "Player.h"

class Refree{
    public:
        Refree();
        Player* refGame(Player* player1, Player* player2);
};


#endif