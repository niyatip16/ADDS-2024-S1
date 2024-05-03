#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() {
	head = nullptr;
}

LinkedList::~LinkedList() {
	while (head != nullptr) {
		deleteFront();
	}
}

void LinkedList::insertFront(int item) {
	Node* newNode = new Node(item, head);
	head = newNode;
}

void LinkedList::deleteFront() {
	if(head != nullptr) {
		Node* oldHead = head;
		head = head->link;
		delete oldHead;
	}
}

void LinkedList::printList() {
	Node* currNode = head;
	while(currNode != nullptr) {
		std::cout << currNode->data << " ";
		currNode = currNode->link;
	}
}

/////////// your code goes here... DO NOT change the function signatures ///////////

bool LinkedList::swap(int pos1, int pos2) {
    if(pos1 < 0 || pos2 < 0 || pos1 >= getSize()||pos2 >= getSize()){

    }

    Node* node1 = traverse(pos1); 
    Node* node2 = traverse(pos2);

    int temp = node1 -> data; 
    node1 -> data = node2 -> data; 
    node2 -> data = temp; 

    return true; 
}

bool LinkedList::find_and_delete(int target) {
   
    if (head == nullptr){
        return false; 
    }

    if (head -> data == target){
        deleteFront(); 
        return true; 
    }

    Node* prevNode = nullptr; 
    Node* currNode = head; 

    while (currNode != nullptr && currNode -> data != target){ 
        prevNode =currNode currNode;
        currNode = currNode -> link; 
    } 

    if (currNode != nullptr){
        prevNode -> link = currNode -> link; 
        delete currNode; 
        return true;
    }
    return false; 
}