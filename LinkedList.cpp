// LinkedList.cpp
#include "LinkedList.h"
#include <iostream>
#include <limits>

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::LinkedList(int* array, int len) {
    head = nullptr;
    for (int i = 0; i < len; ++i) {
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
    if (pos <= 0) pos = 1;
    if (head == nullptr || pos == 1) {
        Node* newNode = new Node(newNum);
        newNode->setLink(head);
        head = newNode;
    } else {
        Node* current = head;
        for (int i = 1; i < pos - 1 && current != nullptr; ++i) {
            current = current->getLink();
        }
        if (current != nullptr) {
            Node* newNode = new Node(newNum);
            newNode->setLink(current->getLink());
            current->setLink(newNode);
        }
    }
}

bool LinkedList::deletePosition(int pos) {
    if (head == nullptr) return false;
    if (pos <= 0) pos = 1;
    if (pos == 1) {
        Node* temp = head;
        head = head->getLink();
        delete temp;
        return true;
    } else {
        Node* current = head;
        for (int i = 1; i < pos - 1 && current != nullptr; ++i) {
            current = current->getLink();
        }
        if (current != nullptr && current->getLink() != nullptr) {
            Node* temp = current->getLink();
            current->setLink(temp->getLink());
            delete temp;
            return true;
        }
    }
    return false;
}

int LinkedList::get(int pos) {
    if (head == nullptr) return std::numeric_limits<int>::max();
    Node* current = head;
    for (int i = 1; i < pos && current != nullptr; ++i) {
        current = current->getLink();
    }
    if (current != nullptr) return current->getData();
    return std::numeric_limits<int>::max();
}

int LinkedList::search(int target) {
    int pos = 1;
    Node* current = head;
    while (current != nullptr) {
        if (current->getData() == target) return pos;
        current = current->getLink();
        ++pos;
    }
    return -1;
}

void LinkedList::printList() {
    if (head == nullptr) return;
    Node* current = head;
    std::cout << "[";
    while (current != nullptr) {
        std::cout << current->getData();
        current = current->getLink();
        if (current != nullptr) std::cout << " ";
    }
    std::cout << "]" << std::endl;
}
