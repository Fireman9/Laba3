#pragma once

#include "LinkedList.h"

class HashTable {
public:
	HashTable();
	~HashTable();
	int hashFun(std::string str);
	void resize();
	void addEl(std::string word, std::string def);
	void findEl(std::string word);
private:
	int size;
	int usedSize;
	LinkedList* array;
};