#include <unordered_map>
#include <unordered_set>
#include <string>

class DocumentManager {
private:
    struct Document {
        std::string name;
        int license_limit;
    };

    std::unordered_map<int, Document> documents; 
    std::unordered_set<int> patrons; 
    std::unordered_map<int, std::unordered_set<int>> borrowed; 

public:
    void addDocument(std::string name, int id, int license_limit) {
        documents[id] = {name, license_limit};
    }

    void addPatron(int patronID) {
        patrons.insert(patronID);
    }

    int search(std::string name) {
        for (const auto& [id, doc] : documents) {
            if (doc.name == name) {
                return id;
            }
        }
        return 0;
    }

    bool borrowDocument(int docid, int patronID) {
        if (documents.find(docid) == documents.end() || patrons.find(patronID) == patrons.end()) {
            return false; 
        }

        if (borrowed[docid].size() < documents[docid].license_limit) {
            borrowed[docid].insert(patronID);
            return true;
        }

        return false; 
    }

    void returnDocument(int docid, int patronID) {
        borrowed[docid].erase(patronID);
    }
};
