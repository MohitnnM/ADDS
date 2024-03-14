#include <iostream>
using namespace std;
#include "Truckloads.h"
#include "Reverser.h"

int main(){
    Truckloads t;
    Reverser r;

    cout<<t.numTrucks(15,1)<<endl;
    cout<<t.numTrucks(14,3)<<endl;
    cout<<t.numTrucks(1024,5)<<endl;
    cout<<r.reverseDigit(456)<<endl;
    cout<<r.reverseString("Hello")<<endl;
}