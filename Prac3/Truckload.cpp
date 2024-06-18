#include <iostream>

class Truckload{
    public:
        int numTrucks(int numCrates, int loadSize){
        if (numCrates <= loadSize) {
            return 1;
        } else {
            int left = numCrates / 2;
            int right = numCrates - left;
            return numTrucks(left, loadSize) + numTrucks(right, loadSize);
        }
    }
};


int main(){
    Truckload trucks;
    int num = trucks.numTrucks(14,6);
    std::cout << num << std::endl;
}