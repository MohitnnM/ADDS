#include "Finder.h"
#include <vector>
#include <string>

std::vector<int> Finder::findSubstrings(std::string s1, std::string s2) {
    std::vector<int> result;
    size_t index = 0; 

    for (size_t i = 1; i <= s2.size(); ++i) {
        // Search for the prefix of s2 in s1 starting from index
        size_t found = s1.find(s2.substr(0, i), index);
        
        if (found != std::string::npos) {
            // Prefix found, update index for next search
            result.push_back(found);
            index = found + 1;
        } else {
            // Prefix not found, no need to continue searching
            result.push_back(-1);
            break;
        }
    }
    return result;
}
