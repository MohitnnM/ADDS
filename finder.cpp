#include <vector>
#include <string>
using namespace std;

vector<int> findSubstrings(string s1, string s2) {
    vector<int> result;
    size_t n = s1.size(), m = s2.size();
    
    // Precompute prefix array for s2
    vector<int> prefix(m, 0);
    for (size_t i = 1, j = 0; i < m; ++i) {
        while (j > 0 && s2[i] != s2[j])
            j = prefix[j - 1];
        if (s2[i] == s2[j])
            ++j;
        prefix[i] = j;
    }
    
    // Search for prefixes in s1 using KMP algorithm
    for (size_t i = 0, j = 0; i < n; ++i) {
        while (j > 0 && s1[i] != s2[j])
            j = prefix[j - 1];
        if (s1[i] == s2[j])
            ++j;
        if (j == m) {
            result.push_back(i - m + 1);
            j = prefix[j - 1];
        }
    }
    
    return result;
}
