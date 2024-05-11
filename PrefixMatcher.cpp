#include "PrefixMatcher.h"

PrefixMatcher::PrefixMatcher() {
    root = new TrieNode();
}

void PrefixMatcher::insert(std::string address, int routerNumber) {
    insertAddress(address, routerNumber);
}

void PrefixMatcher::insertAddress(std::string address, int routerNumber) {
    TrieNode* node = root;
    for (char c : address) {
        if (!node->children[c])
            node->children[c] = new TrieNode();
        node = node->children[c];
    }
    node->routerNumber = routerNumber;
}

int PrefixMatcher::selectRouter(std::string networkAddress) {
    TrieNode* node = root;
    int router = -1;
    for (char c : networkAddress) {
        if (!node->children[c])
            break;
        node = node->children[c];
        if (node->routerNumber != -1)
            router = node->routerNumber;
    }
    return router;
}
