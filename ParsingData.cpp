#include<iostream>
#include<string>
#include<fstream>
#include "HashTable.h"

using namespace std;

void parsing(){//Назар не читай єту хрень пока я не допишу))
string word, def;
ifstream inn;
inn.open("dictionary.txt");
while(inn.eof() != true){
getline(inn, word, ';');
getline(inn, def, '\n');
hashTable.addEl(word, def);
word = "";
def = "";
}
inn.close();
}
