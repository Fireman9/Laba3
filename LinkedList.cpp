#include "LinkedList.h"

LinkedList::LinkedList() {
	this->size = 0;
	this->head = nullptr;
}

LinkedList::~LinkedList() {
	clear();
}

void LinkedList::addDef(std::string str) {
	if (this->head == nullptr) {
		this->head = new Node(str);
	}
	else {
		Node* current = this->head;
		while (current->pointer != nullptr) {
			current = current->pointer;
		}
		current->pointer = new Node(str);
	}
	this->size++;
}

void LinkedList::printAll() {
	Node* temp = this->head;
	while (temp != nullptr) {
		std::cout << temp->definition << std::endl;
		temp = temp->pointer;
	}
	delete temp;
}

void LinkedList::clear() {
	for (int i = 0; i < this->size; i++) {
		Node* temp = this->head;
		this->head = temp->pointer;
		delete temp;
	}
	this->size = 0;
}