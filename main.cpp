#include "HashTable.h"
#include <fstream>
#include <string>
#include <ctime>

int main() {
	auto start = clock();
	HashTable hashTable;
	/*hashTable.addEl("A", "1st letter");
	hashTable.addEl("B", "2nd letter");
	hashTable.addEl("C", "3rd letter");
	hashTable.addEl("LOL", "funny");
	hashTable.addEl("BAN", "gi");
	hashTable.addEl("D", "4th letter");
	hashTable.addEl("E", "5th letter");
	hashTable.addEl("F", "6th letter");
	hashTable.addEl("G", "7th letter");
	hashTable.addEl("TAK", "yes");
	hashTable.findEl("LOL");
	hashTable.findEl("A");
	hashTable.findEl("BAN");
	hashTable.findEl("G");
	hashTable.findEl("TAK");*/
	auto finish = clock();
	std::cout << finish - start << std::endl;
	/*hashTable.addEl("AD-", "Huita(test)");*/
	/*hashTable.addEl("A B C", "Huita(test)");*/
	/*hashTable.addEl("ABDOMINOTHORACIC", "Huita(test)");*/
	system("pause");
	return 0;
}