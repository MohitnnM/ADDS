#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include <string>
#include <unordered_map>

class TrieNode {
public:
    std::unordered_map<char, TrieNode*> children;
    int routerNumber;

    TrieNode() {
        routerNumber = -1;
    }
};

class PrefixMatcher {
private:
    TrieNode* root;

    void insertAddress(std::string address, int routerNumber);

public:
    PrefixMatcher();

    void insert(std::string address, int routerNumber);

    int selectRouter(std::string networkAddress);
};

#endif
