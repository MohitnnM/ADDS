#include "BigNumCalc.h"
#include <list>
#include <string>

std::list<int> BigNumCalc::buildBigNum(std::string numString) {
    std::list<int> result;
    for (char c : numString) {
        result.push_back(c - '0');
    }
    return result;
}

std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    int carry = 0;

    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();

    while (it1 != num1.rend() || it2 != num2.rend() || carry != 0) {
        int sum = carry;
        if (it1 != num1.rend()) {
            sum += *it1;
            ++it1;
        }
        if (it2 != num2.rend()) {
            sum += *it2;
            ++it2;
        }
        carry = sum / 10;
        result.push_front(sum % 10);
    }

    return result;
}

std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    int borrow = 0;

    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();

    while (it1 != num1.rend() || it2 != num2.rend()) {
        int diff = borrow;
        if (it1 != num1.rend()) {
            diff += *it1;
            ++it1;
        }
        if (it2 != num2.rend()) {
            diff -= *it2;
            ++it2;
        }
        if (diff < 0) {
            diff += 10;
            borrow = -1;
        } else {
            borrow = 0;
        }
        result.push_front(diff);
    }


    while (result.size() > 1 && result.front() == 0) {
        result.pop_front();
    }

    return result;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
    std::list<int> product;
    int carryOver = 0;

    for (auto it1 = num1.rbegin(); it1 != num1.rend(); ++it1) {
        std::list<int> partialProduct;
        int digit1 = *it1;
        carryOver = 0;


        for (int i = 0; i < num1.size() - 1 - std::distance(num1.rbegin(), it1); ++i) {
            partialProduct.push_back(0);
        }

        for (auto it2 = num2.rbegin(); it2 != num2.rend(); ++it2) {
            int digit2 = *it2;
            int productDigit = (digit1 * digit2) + carryOver;
            carryOver = productDigit / 10;
            partialProduct.push_front(productDigit % 10);
        }


        if (carryOver > 0) {
            partialProduct.push_front(carryOver);
        }

        product = add(product, partialProduct);
    }

    return product;
}
