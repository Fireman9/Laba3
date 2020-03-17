#pragma once
#include <iostream>

class LinkedList {
public:
	LinkedList();
	~LinkedList();
	void addDef(std::string str);
	void printAll();
	void clear();
private:
	class Node {
	public:
		std::string definition;
		Node* pointer;

		Node(std::string str, Node* pNext = nullptr) {
			this->definition = str;
			this->pointer = pNext;
		}
	};
	int size;
	Node* head;
};