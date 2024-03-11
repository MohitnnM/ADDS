#include "Referee.h"


Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    if (move1->getName() == move2->getName()) {
        return nullptr;
    }

    for (const string& str : move1->getAttacks()) {
        if (str == move2->getName()) {
            return player1;
        }
    }

    for (const string& str : move2->getAttacks()) {
        if (str == move1->getName()) {
            return player2;
        }
    }
    return nullptr;
}
