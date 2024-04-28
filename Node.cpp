#include "Node.h"

Node::Node(int data) {
    this->data = data;
    link = nullptr;
}

int Node::getData() const {
    return data;
}

void Node::setData(int newData) {
    data = newData;
}

Node* Node::getLink() const {
    return link;
}

void Node::setLink(Node* newLink) {
    link = newLink;
}
