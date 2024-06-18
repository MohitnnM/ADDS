#include <iostream>
#include "BagOfHoldings.h"
using namespace std;

int main(){
   BagOfHoldings<std::string> bag;

    // Add items to the bag
    bag.addItem("Sword");
    bag.addItem("Shield");
    bag.addItem("Potion");

    // Remove a specific item
    if (bag.removeItem("Potion")) {
        std::cout << "Potion removed from the bag." << std::endl;
    } else {
        std::cout << "Potion not found in the bag." << std::endl;
    }

}
