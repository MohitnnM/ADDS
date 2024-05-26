#include "DocumentManager.h"
#include <iostream>

void DocumentManager::addDocument(std::string name, int id, int lic_limit) {
    if (documentsById.find(id) != documentsById.end() || docByName.find(name) != docByName.end()) {
        std::cerr << "Document with id " << id << " or name " << name << " already exists." << std::endl;
        return;
    }
    Document doc = {name, id, lic_limit, 0};
    documentsById[id] = doc;
    docByName[name] = doc;
}

void DocumentManager::addPatron(int patronID) {
    patrons.insert(patronID);
}

int DocumentManager::search(std::string name) {
    if (docByName.find(name) != docByName.end()) {
        return docByName[name].id;
    }
    return 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID) {
    if (documentsById.find(docid) == documentsById.end() || patrons.find(patronID) == patrons.end()) {
        return false;
    }

    Document& doc = documentsById[docid];
    if (borrowed[docid].size() >= doc.lic_limit) {
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
