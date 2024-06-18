#ifndef BAGOFHOLDINGS_H
#define BAGOFHOLDINGS_H

#include <vector>
#include <algorithm>
#include <stdexcept>

template <class T>
class BagOfHoldings {
private:
    std::vector<T> items;

public:
    BagOfHoldings();
    void addItem(const T& item);
    bool removeItem(const T& item);
    bool Contains(const T& item);
};

#include "BagOfHoldings.cpp" // Include the implementation file here

#endif // BAGOFHOLDINGS_H
