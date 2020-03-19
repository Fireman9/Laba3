#include "LinkedList.h"

LinkedList::LinkedList() {
	this->size = 0;
	this->head = nullptr;
}

LinkedList::~LinkedList() {
	clear();
}

void LinkedList::addEl(std::string word, std::string definition) {
	if (this->head == nullptr) {
		this->head = new Node(word, definition);
	}
	else {
		Node* current = this->head;
		while (current->pointer != nullptr) {
			current = current->pointer;
		}
		current->pointer = new Node(word, definition);
	}
	this->size++;
}

void LinkedList::printDefinition(std::string word) {
	Node* temp = this->head;
	while (temp != nullptr) {
		if (temp->word == word) {
			std::cout << temp->definition << std::endl;
		}
		temp = temp->pointer;
	}
}

void LinkedList::clear() {
	for (int i = 0; i < this->size; i++) {
		Node* temp = this->head;
		this->head = temp->pointer;
		delete temp;
	}
	this->size = 0;
}

int LinkedList::getSize() {
	return this->size;
}

void LinkedList::getEl(std::string& word, std::string& def, int position) {
	Node* temp = this->head;
	for (int i = 0; i <= position; i++) {
		if (i == position) {
			word = temp->word;
			def = temp->definition;
		}
		temp = temp->pointer;
	}
}