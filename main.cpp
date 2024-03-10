#include <iostream>
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    Human human;
    Computer computer;
    Referee referee;

    Move* humanMove = human.makeMove();
    Move* computerMove = computer.makeMove();

    Player* winner = referee.refGame(&human, &computer);

    std::cout << "The winner is " << (winner ? winner->getName() : "no one") << "!" << std::endl;

    delete humanMove;
    delete computerMove;

    return 0;
}