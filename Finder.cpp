#include "Finder.h"
#include <iostream>

std::vector<int> Finder::findSubstrings(std::string s1, std::string s2)
{
    std::vector<int> result;

    for (size_t i = 0; i <= s1.length() - s2.length(); i++)
    {
        if (s1.compare(i, s2.length(), s2) == 0)
        {
            result.push_back(i);
        }
    }

    return result;
}