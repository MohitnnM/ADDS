#ifndef NODE_H
#define NODE_H

class Node {
private:
    int data;
    Node* link;
public:
    Node(int data); // Constructor
    int getData() const; 
    void setData(int newData); 
    Node* getLink() const; 
    void setLink(Node* newLink); 
};

#endif 
