#include "ParsingData.h"

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
        cout << "File wasn't open!" << endl;
    }
}

vector<string> divideAndRule(string& phrase) {
    vector <string> words;
    phrase += " ";
    string buf;
    for(int i = 0; i < phrase.length(); i++) {
        if(phrase[i] != ' ') {
            buf += phrase[i];
        }
        else {
            words.push_back(buf);
            buf = "";
        }
    }
    return words;
}

void upperRegistr(vector<string>& word) {
    for(int i = 0; i < word.size(); i++) {
        for(int j = 0; j < word[i].length(); j++) {
            if (word[i][j] != '-' && word[i][j] != ' ') {
                word[i][j] = toupper(word[i][j]);
            }
        }
    }
}

void inputPhrase(HashTable& hashTable) {
    string phrase;
    while (true) {
        cout << "Enter your word/phrase for definition(enter '-1' to exit): ";
        getline(cin, phrase, '\n');
        if (phrase == "-1")break;
        cout << endl;
        vector<string> words = divideAndRule(phrase);
        upperRegistr(words);
        for (int i = 0; i < words.size(); i++) {
            cout << "Word: " << words[i] << endl;
            cout << "Definition: ";
            hashTable.findEl(words[i]);
            cout << endl;
        }
    }
}
