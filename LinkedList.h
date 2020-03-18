#pragma once
#include <iostream>

class LinkedList {
public:
	LinkedList();
	~LinkedList();
	void addEl(std::string word, std::string definition);
	void printWord(std::string word);
	void clear();
private:
	class Node {
	public:
		std::string word;
		std::string definition;
		Node* pointer;

		Node(std::string word, std::string def, Node* pNext = nullptr) {
			this->word = word;
			this->definition = def;
			this->pointer = pNext;
		}
	};
	int size;
	Node* head;
};