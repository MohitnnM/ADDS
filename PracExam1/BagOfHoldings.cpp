#include "BagOfHoldings.h"
#include <iostream>
#include <algorithm>
using namespace std;

template<class T>
BagOfHoldings<T>::BagOfHoldings(){}

template<class T>
void BagOfHoldings<T>::addItem(const T& item){
    if (!Contains(item)){
        items.push_back(item);
    }
}

template <class T>
bool BagOfHoldings<T>::Contains(const T& item){
    auto it = find(items.begin(), items.end(), item);
    if (it != items.end()){
        return true;
    } else {
        return false;
    }
}

template <class T>
bool BagOfHoldings<T>::removeItem(const T& item){
    auto it = find(items.begin(),items.end(),item);
    if (it != items.end()){
        items.erase(it);
        return true;
    } else {
        return false;
    }
}