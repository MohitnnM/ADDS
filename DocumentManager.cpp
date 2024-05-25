#include "DocumentManager.h"

void DocumentManager::addDocument(std::string name, int id, int license_limit) {
    documents[id] = {name, license_limit};
}

void DocumentManager::addPatron(int patronID) {
    patrons.insert(patronID);
}

int DocumentManager::search(std::string name) {
    for (const auto& [id, doc] : documents) {
        if (doc.name == name) {
            return id;
        }
    }
    return 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID) {
    if (documents.find(docid) == documents.end() || patrons.find(patronID) == patrons.end()) {
        return false;
    }

    if (borrowed[docid].size() < documents[docid].license_limit) {
        borrowed[docid].insert(patronID);
        return true;
    }

    return false; 
}

void DocumentManager::returnDocument(int docid, int patronID) {
    borrowed[docid].erase(patronID);
}
