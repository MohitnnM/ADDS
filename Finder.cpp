#include "Finder.h"
#include <vector>
#include <string>

std::vector<int> Finder::findSubstrings(std::string s1, std::string s2) {
    std::vector<int> result;
    int n = s1.size();
    int m = s2.size();

    
    std::vector<int> failure(m, 0);
    for (int i = 1, k = 0; i < m; ++i) {
        while (k > 0 && s2[i] != s2[k])
            k = failure[k - 1];
        if (s2[i] == s2[k])
            ++k;
        failure[i] = k;
    }

    int max_matches = n / m;
    result.reserve(max_matches);

    for (int i = 0; i <= n - m; ++i) {
        int k = 0;
        while (k < m && s1[i + k] == s2[k])
            ++k;
        if (k == m) { 
            result.push_back(i);
        }
        if (n - i <= m)
            break;
    }

    return result;
}
