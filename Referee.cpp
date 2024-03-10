
#include "iostream"
#include "Referee.h"


Referee::Referee(){}

Player * Referee::refGame(Player * player1, Player * player2){
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    if (move1->getName() == move2->getName()) {
        delete move1;
        delete move2;
        return nullptr; // Tie
    } else if (move1->beats(move2)) {
        delete move2;
        delete move1; // Delete move1 after move2 since move2 is passed to the caller
        return player1;
    } else {
        delete move1;
        delete move2; // Delete move2 after move1 since move1 is passed to the caller
        return player2;
    }
}