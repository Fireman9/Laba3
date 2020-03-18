#include "HashTable.h"

HashTable::HashTable() {
	size = 0;
	usedSize = 0;
	array = new LinkedList[size];
}

HashTable::~HashTable() {
	delete[] array;
}

int HashTable::hashFun(std::string str) {
	int key;

	return key;
}

void HashTable::resize() {
	
}

void HashTable::addEl(std::string word, std::string def) {
	if (this->usedSize + 1 > this->size * 0.8) {
		resize();
	}
	array[hashFun(word)].addEl(word, def);
}