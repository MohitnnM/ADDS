#include "Autocomplete.h"

Autocomplete::Autocomplete() {
    root = new TrieNode();
}

void Autocomplete::insert(std::string word) {
    insertWord(word);
}

void Autocomplete::insertWord(std::string word) {
    TrieNode* node = root;
    for (char c : word) {
        if (!node->children[c])
            node->children[c] = new TrieNode();
        node = node->children[c];
    }
    node->isEnd = true;
}

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord) {
    TrieNode* node = root;
    std::vector<std::string> suggestions;
    for (char c : partialWord) {
        if (!node->children[c])
            return suggestions;
        node = node->children[c];
    }
    findWords(node, partialWord, suggestions);
    return suggestions;
}

void Autocomplete::findWords(TrieNode* node, std::string prefix, std::vector<std::string>& suggestions) {
    if (node->isEnd)
        suggestions.push_back(prefix);

    for (auto it = node->children.begin(); it != node->children.end(); ++it) {
        findWords(it->second, prefix + it->first, suggestions);
    }
}
