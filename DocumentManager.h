#ifndef DOCUMENT_MANAGER_H
#define DOCUMENT_MANAGER_H

#include <unordered_map>
#include <unordered_set>
#include <string>

class DocumentManager {
private:
    struct Document {
        std::string name;
        int id;
        int lic_limit;
        int copies_borrowed;
    };

    std::unordered_map<std::string, Document> docByName;
    std::unordered_map<int, Document> documentsById;
    std::unordered_set<int> patrons;
    std::unordered_map<int, std::unordered_set<int>> borrowed;

public:
    void addDocument(std::string name, int id, int lic_limit);
    void addPatron(int patronID);
    int search(std::string name);
    bool borrowDocument(int docid, int patronID);
    void returnDocument(int docid, int patronID);
};

#endif
