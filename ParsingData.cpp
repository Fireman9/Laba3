#include "ParsingData.h"

using namespace std;

void parsing(HashTable& hashTable) {
    string word, def;
    ifstream in;
    in.open("dictionary.txt");
    if(in.is_open()) {
        while(in.eof() != true) {
            getline(in, word, ';');
            getline(in, def, '\n');
            hashTable.addEl(word, def);
            word = "";
            def = "";
        }
        in.close();
    }
    else {
        cout<< "File wasn't open!"<<endl;
    }
}

void inputPhrase() {//Nazar don`t read please:)
    vector <string> word;
    string buf;
    string phrase;
    char a;
    cout << " Enter your word/phrase for translate and press 'Enter': " << endl;
    getline(cin, phrase, '\n');
    cout << endl;
    cout << phrase << endl;
}
