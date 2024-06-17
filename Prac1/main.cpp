#include <iostream>
#include "Computer.h"
#include "Human.h"
#include "Refree.h"

int main(){
    std::string playerName;
    std::cout << "Enter name: ";
    std::cin >> playerName;

    Player* player = new Human(playerName);
    Player* comp = new Computer();
    Refree ref;

    Player* winner = ref.refGame(player, comp);

    if (winner==nullptr){
        std::cout<< "It's a Tie";
    } else {
        std::cout << winner->getName() + " Wins!"<< std::endl;
    }

}