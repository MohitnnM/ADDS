
#include "BigNumCalc.h"
#include <list>

BigNumCalc::BigNumCalc() {}

BigNumCalc::~BigNumCalc() {}

std::list<int> BigNumCalc::buildBigNum(std::string numString) {
    std::list<int> bigNum;
    for (char c : numString) {
        bigNum.push_back(c - '0');
    }
    return bigNum;
}

std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    int carry = 0;
    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();
    while (it1 != num1.rend() || it2 != num2.rend() || carry) {
        if (it1 != num1.rend()) {
            carry += *it1;
            ++it1;
        }
        if (it2 != num2.rend()) {
            carry += *it2;
            ++it2;
        }
        result.push_front(carry % 10);
        carry /= 10;
    }
    return result;
}

std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    int borrow = 0;
    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();
    while (it1 != num1.rend()) {
        int diff = *it1 - borrow;
        if (it2 != num2.rend()) {
            diff -= *it2;
            ++it2;
        }
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result.push_front(diff);
        ++it1;
    }
    return result;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
    int n = num2.back();
   
