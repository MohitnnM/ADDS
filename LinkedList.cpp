#include "LinkedList.h"
#include <iostream>
#include <limits>

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::LinkedList(int* array, int len) {
    head = nullptr;
    for (int i = len - 1; i >= 0; i--) {
        insertPosition(1, array[i]);
    }
}

LinkedList::~LinkedList() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->getLink();
        delete temp;
    }
}

void LinkedList::insertPosition(int pos, int newNum) {
    if (pos <= 0) {
        pos = 1;
    }
    if (head == nullptr || pos == 1) {
        Node* newNode = new Node(newNum);
        newNode->setLink(head);
        head = newNode;
    } else {
        Node* current = head;
        for (int i = 1; i < pos - 1 && current->getLink() != nullptr; i++) {
            current = current->getLink();
        }
        Node* newNode = new Node(newNum);
        newNode->setLink(current->getLink());
        current->setLink(newNode);
    }
}

bool LinkedList::deletePosition(int pos) {
    if (pos <= 0 || head == nullptr) {
        return false;
    }
    if (pos == 1) {
        Node* temp = head;
        head = head->getLink();
        delete temp;
        return true;
    } else {
        Node* current = head;
        for (int i = 1; i < pos - 1 && current->getLink() != nullptr; i++) {
            current = current->getLink();
        }
        if (current->getLink() == nullptr) {
            return false;
        }
        Node* temp = current->getLink();
        current->setLink(temp->getLink());
        delete temp;
        return true;
    }
}

int LinkedList::get(int pos) {
    if (pos <= 0 || head == nullptr) {
        return std::numeric_limits<int>::max();
    }
    Node* current = head;
    for (int i = 1; i < pos && current != nullptr; i++) {
        current = current->getLink();
    }
    if (current == nullptr) {
        return std::numeric_limits<int>::max();
    }
    return current->getData();
}

int LinkedList::search(int target) {
    int index = 1;
    Node* current = head;
    while (current != nullptr) {
        if (current->getData() == target) {
            return index;
        }
        current = current->getLink();
        index++;
    }
    return -1; 
}

void LinkedList::printList() {
    std::cout << "[";
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->getData();
        if (current->getLink() != nullptr) {
            std::cout << " ";
        }
        current = current->getLink();
    }
    std::cout << "]" << std::endl;
}
