#include "Finder.h"
using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
std::vector<int> result;
    int n = s1.length();
    int m = s2.length();
    
    std::vector<int> prefix(s2.length());
    prefix[0] = 0;
    int k = 0;
    for (int i = 1; i < s2.length(); ++i) {
        while (k > 0 && s2[k] != s2[i]) {
            k = prefix[k - 1];
        }
        if (s2[k] == s2[i]) {
            k++;
        }
        prefix[i] = k;
    }
    
    int q = 0;
    for (int i = 0; i < s1.length(); ++i) {
        while (q > 0 && s2[q] != s1[i]) {
            q = prefix[q - 1];
        }
        if (s2[q] == s1[i]) {
            q++;
        }
        if (q == m) {
            result.push_back(i - m + 1);
            q = prefix[q - 1];
        }
    }
    
    if (result.empty()) {
        result.push_back(-1);
    }
    
    return result;
}
