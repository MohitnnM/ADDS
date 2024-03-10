
#include <iostream>
#include <string>
#include "Human.h" // assume these exist
#include "Computer.h" // assume these exist
class Referee {
    public:
        void play(int rounds, Human player1, Computer player2) {
        for (int i = 0; i < rounds; i++) {
        //DIP violation
        playRound();
        }
        announceWinner();
    }
    private:
        std::string humanMove;
        int humanScore = 0;
        int computerScore = 0;
        int playRound() {
            //OCP violation
            //Reason: should be done in another function becuase if another player is
            //added the the code will need to be modified
            std::cout << "Enter move: ";
            std::cin >> humanMove;
            //OCP violation
            //Reason: same as above
            if (humanMove == "paper") {
                humanScore++;
            } else if (humanMove == "scissors") {
                computerScore++;
            }
        }
        void announceWinner() {
            if (humanScore > computerScore){
                std::cout << "Human wins!" << std::endl;
            }else if (computerScore > humanScore){
                std::cout << "Computer wins!" << std::endl;
            }else
                std::cout << "It's a tie!" << std::endl;
            }
};

class Human{

};

int main(void) {
    Referee referee;
    referee.play(3);
    return 0;
}