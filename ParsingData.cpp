#include<iostream>
#include<string>
#include<fstream>
#include "HashTable.h"

using namespace std;

void parsing(){//����� �� ����� ��� ����� ���� � �� ������))
string word, def;
word = "";
def = "";
char buf ;
ifstream inn;
inn.open("dictionary.txt");
for(int i = 0; i < /*���������� ���� � �������*/ ; i++){
getline(inn, word, ';');
getline(inn, def, '\n');
hashTable.addEl(word, def);
}
inn.close();
}
