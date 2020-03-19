#include "HashTable.h"
#include <cmath>

HashTable::HashTable() {
	size = 1;
	usedSize = 0;
	array = new LinkedList[size];
}

HashTable::~HashTable() {
	delete[] array;
}

int HashTable::hashFun(std::string str) {
	int key = 0;
	long long temp;
	char cast;
	int ascii;
	for (int i = 0; i < str.length(); i++) {
		temp = pow(26, (str.length() - (i + 1)));
		cast = str[i];
		ascii = (int)cast - 65;
	}
	temp *= ascii;
	temp %= size;
	key = temp;
	return key;
}

void HashTable::resize() {
	usedSize = 0;
	std::string word = "";
	std::string def = "";
	LinkedList* temp = array;
	size *= 2;
	array = new LinkedList[size];
	for (int i = 0; i < size/2; i++) {
		for (int j = 0; j < temp[i].getSize(); j++) {
			temp[i].getEl(word, def, j);
			addEl(word, def);
		}
	}
	delete[] temp;
}

void HashTable::addEl(std::string word, std::string def) {
	if (this->usedSize + 1> this->size * 0.8) {
		resize();
	}
	array[hashFun(word)].addEl(word, def);
	this->usedSize++;
}

void HashTable::findEl(std::string word) {
	array[hashFun(word)].printDefinition(word);
}