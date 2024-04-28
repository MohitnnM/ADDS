#include "LinkedList.h"
#include <iostream>
#include <limits>

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::LinkedList(int* array, int len) {
    head = nullptr;
    for (int i = 0; i < len; i++) {
        insertPosition(i + 1, array[i]);
    }
}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->getLink();
        delete current;
        current = next;
    }
}

void LinkedList::insertPosition(int pos, int newNum) {
    Node* newNode = new Node(newNum);
    if (pos <= 0) pos = 1; 
    if (head == nullptr || pos == 1) {
        newNode->setLink(head);
        head = newNode;
    } else {
        Node* current = head;
        for (int i = 1; i < pos - 1 && current->getLink() != nullptr; i++) {
            current = current->getLink();
        }
        newNode->setLink(current->getLink());
        current->setLink(newNode);
    }
}

bool LinkedList::deletePosition(int pos) {
    if (pos <= 0) return false; 
    if (head == nullptr) return false; 

    Node* current = head;
    if (pos == 1) {
        head = head->getLink();
        delete current;
        return true;
    }

    for (int i = 1; i < pos - 1 && current->getLink() != nullptr; i++) {
        current = current->getLink();
    }

    if (current->getLink() == nullptr) return false; 
    Node* temp = current->getLink();
    current->setLink(temp->getLink());
    delete temp;
    return true;
}

int LinkedList::get(int pos) {
    if (pos <= 0) return std::numeric_limits<int>::max(); 
    Node* current = head;
    for (int i = 1; i < pos && current != nullptr; i++) {
        current = current->getLink();
    }
    if (current == nullptr) return std::numeric_limits<int>::max(); 
    return current->getData();
}

int LinkedList::search(int target) {
    int pos = 1;
    Node* current = head;
    while (current != nullptr) {
        if (current->getData() == target) return pos;
        current = current->getLink();
        pos++;
    }
    return -1; 
}

void LinkedList::printList() {
    Node* current = head;
    std::cout << "[";
    while (current != nullptr) {
        std::cout << current->getData();
        if (current->getLink() != nullptr) std::cout << " ";
        current = current->getLink();
    }
    std::cout << "]" << std::endl;
}
