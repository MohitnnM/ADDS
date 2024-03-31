#include "Finder.h"
#include <vector>
#include <string>

std::vector<int> Finder::findSubstrings(std::string s1, std::string s2) {
    std::vector<int> result;
    size_t index = 0; 

    for (size_t i = 1; i < s2.size(); ++i) {
        size_t found = s1.find(s2.substr(0, i), index);
        
        if (found != std::string::npos) {
            
            result.push_back(found);
            index = found + 1;
        } else {
            result.push_back(-1);
            break;
        }
    }
    return result;
}
