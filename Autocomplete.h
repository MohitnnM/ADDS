#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include <vector>
#include <string>
#include <unordered_map>

class TrieNode {
public:
    std::unordered_map<char, TrieNode*> children;
    bool isEnd;

    TrieNode() {
        isEnd = false;
    }
};

class Autocomplete {
private:
    TrieNode* root;

    void insertWord(std::string word);

public:
    Autocomplete();

    void insert(std::string word);

    std::vector<std::string> getSuggestions(std::string partialWord);

    void findWords(TrieNode* node, std::string prefix, std::vector<std::string>& suggestions);
};

#endif
