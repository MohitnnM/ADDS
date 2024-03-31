#include "Finder.h"
#include <vector>
#include <string>

std::vector<int> Finder::findSubstrings(std::string s1, std::string s2) {
    std::vector<int> result;
    size_t index = 0; // Initialize index to search from

    for (size_t i = 1; i <= s2.size(); ++i) {
        size_t found = s1.find(s2.substr(0, i), index);
        
        if (found != std::string::npos) {
            index = found + 1;
            result.push_back(found);
        } else {
            result.push_back(-1);
            break;
        }
    }
    return result;
}
