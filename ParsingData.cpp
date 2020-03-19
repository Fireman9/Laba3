#include<iostream>
#include<string>
#include<fstream>
#include "HashTable.h"

using namespace std;

void parsing(){//Назар не читай єту хрень пока я не допишу))
string word, def;
word = "";
def = "";
char buf ;
ifstream inn;
inn.open("dictionary.txt");
for(int i = 0; i < /*количество слов в словаре*/ ; i++){
getline(inn, word, ';');
getline(inn, def, '\n');
hashTable.addEl(word, def);
}
inn.close();
}
