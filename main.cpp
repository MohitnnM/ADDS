#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
using namespace std;

int main() {
    string playerName;
    cout << "Enter your name: ";
    cin >> playerName;

    Player* humanPlayer = new Human(playerName);
    Player* computer = new Computer();

    Referee referee;

    Player* winner = referee.refGame(humanPlayer, computer);


    if (winner == nullptr)
        cout << "It's a Tie\n";
    else
        cout << winner->getName() << " Wins\n";

    delete humanPlayer;
    delete computer;

    return 0;
}