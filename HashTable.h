#pragma once

#include "LinkedList.h"

class HashTable {
public:
	HashTable();
	~HashTable();
	int hashFun(std::string str);
	void resize();
	void addEl(std::string word, std::string def);
private:
	int size;
	int usedSize;
	LinkedList* array;
};