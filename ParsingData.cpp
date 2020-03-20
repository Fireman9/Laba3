#include<iostream>
#include<string>
#include<fstream>
#include "HashTable.h"

using namespace std;

void parsing(HashTable& hashTable) //Ќазар не читай эту хрень пока € не допишу))
{
    string word, def;
    ifstream inn;
    inn.open("dictionary.txt");
    if(inn.is_open())
    {
        while(inn.eof() != true)
        {
            getline(inn, word, ';');
            getline(inn, def, '\n');
            hashTable.addEl(word, def);
            word = "";
            def = "";
        }
        inn.close();
    }
    else
    {
        cout<< "File wasn`t open!"<<endl;
    }
}
