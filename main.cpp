#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    std::string playerName;
    std::cout << "Enter your name: ";
    std::cin >> playerName;

    Human humanPlayer(playerName);
    Computer computerPlayer;

    Referee referee;

    Player* winner = referee.refGame(&humanPlayer, &computerPlayer);

    if (winner == nullptr) {
        std::cout << "It's a tie!" << std::endl;
    } else {
        std::cout << "The winner is: " << winner->getName() << std::endl;
    }

    return 0;
}