#include <iostream>
#include <cstddef>
#include "List.h"

List::List(Node* head, Node* tail) {
	this->head = head;
	this->tail = tail;
	this->head->next = NULL;
	this->head->next = NULL;
}

void List::push(int val) {
	Node* node = new Node();
	node->val = val;
        node->next = NULL;
        if (head->next) {
		tail->next->next = node;
	    	tail->next = node;
	}
	else {
		head->next = node;
		tail->next = node;
	}
}

void List::pop() {
	Node* prevNode;
	if (head->next == tail->next) {
		delete head->next;
		head->next = NULL;
		tail->next = NULL;
	}
	else if (head->next) {
		prevNode = head->next;
		while(prevNode->next == tail->next) {
			tail->next = prevNode;
			delete prevNode->next;
			prevNode->next = NULL;	
		}
	}	
}

void List::show() {
	Node* node = head->next;
	std::cout << "List:" << std::endl;
	while(node) {
		std::cout << node->val << std::endl;
		node = node->next;
	}
}
