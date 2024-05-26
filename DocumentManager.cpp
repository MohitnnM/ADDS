#include "DocumentManager.h"
#include <iostream>

void DocumentManager::addDocument(std::string name, int id, int license_limit) {
    if (documentsById.find(id) != documentsById.end() || documentsByName.find(name) != documentsByName.end()) {
        std::cerr << "Document with id " << id << " or name " << name << " already exists." << std::endl;
        return;
    }
    Document doc = {name, id, license_limit, 0};
    documentsById[id] = doc;
    documentsByName[name] = doc;
}

void DocumentManager::addPatron(int patronID) {
    patrons.insert(patronID);
}

int DocumentManager::search(std::string name) {
    if (documentsByName.find(name) != documentsByName.end()) {
        return documentsByName[name].id;
    }
    return 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID) {
    if (documentsById.find(docid) == documentsById.end() || patrons.find(patronID) == patrons.end()) {
        return false;
    }

    Document& doc = documentsById[docid];
    if (borrowed[docid].size() >= doc.license_limit) {
        return false;
    }

    borrowed[docid].insert(patronID);
    doc.copies_borrowed++;
    return true;
}

void DocumentManager::returnDocument(int docid, int patronID) {
    if (documentsById.find(docid) == documentsById.end() || patrons.find(patronID) == patrons.end()) {
        return;
    }

    if (borrowed.find(docid) != borrowed.end() && borrowed[docid].find(patronID) != borrowed[docid].end()) {
        borrowed[docid].erase(patronID);
        documentsById[docid].copies_borrowed--;
    }
}
