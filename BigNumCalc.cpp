#include "BigNumCalc.h"
#include <list>

std::list<int> BigNumCalc::buildBigNum(std::string numString) {
    std::list<int> bigNum;
    for (char digit : numString) {
        bigNum.push_back(digit - '0'); 
    }
    return bigNum;
}

std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    std::list<int> sum;
    int carry = 0;
    auto it1 = num1.rbegin(); 
    auto it2 = num2.rbegin();
    while (it1 != num1.rend() || it2 != num2.rend() || carry != 0) {
        int digitSum = carry;
        if (it1 != num1.rend()) {
            digitSum += *it1;
            ++it1;
        }
        if (it2 != num2.rend()) {
            digitSum += *it2;
            ++it2;
        }
        sum.push_front(digitSum % 10); 
        carry = digitSum / 10; 
    }
    return sum;
}

std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
    std::list<int> diff;
    int borrow = 0;
    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();
    while (it1 != num1.rend() || it2 != num2.rend()) {
        int digitDiff = borrow;
        if (it1 != num1.rend()) {
            digitDiff += *it1;
            ++it1;
        }
        if (it2 != num2.rend()) {
            digitDiff -= *it2;
            ++it2;
        }
        if (digitDiff < 0) {
            digitDiff += 10;
            borrow = -1;
        } else {
            borrow = 0;
        }
        diff.push_front(digitDiff); 
    }
    while (!diff.empty() && diff.front() == 0) {
        diff.pop_front();
    }
    return diff;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
    int digit2 = num2.front(); 
    std::list<int> product;
    int carry = 0;
    auto it1 = num1.rbegin(); 
    while (it1 != num1.rend() || carry != 0) {
        int digitProd = carry;
        if (it1 != num1.rend()) {
            digitProd += (*it1) * digit2;
            ++it1;
        }
        product.push_front(digitProd % 10);
        carry = digitProd / 10; 
    }
    while (!product.empty() && product.front() == 0) {
        product.pop_front();
    }
    return product;
}
