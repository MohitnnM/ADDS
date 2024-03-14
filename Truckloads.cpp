#include <iostream>
#include "Truckloads.h"
using namespace std;


int Truckloads::numTrucks(int numCrates, int loadSize){
    if(numCrates <= loadSize){
        return 1;
    }else{
        int half = numCrates/2;
        return numTrucks(half,loadSize) + numTrucks(numCrates-half,loadSize);
    }
}