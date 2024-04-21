#include <iostream>
#include <sstream>
#include <vector>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::istringstream iss(input);
    int num;
    std::vector<int> list;
    
    while (iss >> num) {
        list.push_back(num);
    }

    QuickSort quickSort;
    list = quickSort.sort(list);

    RecursiveBinarySearch binarySearch;
    bool found = binarySearch.search(list, 1);

    std::cout << (found ? "true" : "false") << " ";
    for (int num : list) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
