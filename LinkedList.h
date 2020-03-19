#pragma once
#include <iostream>

class LinkedList {
public:
	LinkedList();
	~LinkedList();
	void addEl(std::string word, std::string definition);
	void printDefinition(std::string word);
	void clear();
	int getSize();
	void getEl(std::string& word, std::string& def, int position);
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