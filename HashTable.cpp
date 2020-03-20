#include "HashTable.h"
#include <cmath>

HashTable::HashTable() {
    size = 8;
    usedSize = 0;
    array = new LinkedList[size];
}

HashTable::~HashTable() {
    delete[] array;
}

int HashTable::hashFun(std::string str) {
    int key = 0;
    long long temp1 = 0;
    long long temp2 = 0;
    char cast;
    int ascii;
    for (int i = 0; i < str.length(); i++) {
        if (str.length() - (i + 1) > 8) {
            temp1 = pow(26, 8);
        }
        else {
            temp1 = pow(26, (str.length() - (i + 1)));
        }
        if (str[i] != '-' && str[i] != ' ') {
            cast = str[i];
            ascii = (int)cast - 65;
        }
        else {
            ascii = 1;
        }
        temp1 *= ascii;
        temp2 += temp1;
    }
    temp2 %= size;
    key = temp2;
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
