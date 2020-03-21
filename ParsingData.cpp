#include "ParsingData.h"

using namespace std;

void parsing(HashTable& hashTable)
{
    string word, def;
    ifstream in;
    in.open("dictionary.txt");
    if(in.is_open())
    {
        while(in.eof() != true)
        {
            getline(in, word, ';');
            getline(in, def, '\n');
            hashTable.addEl(word, def);
            word = "";
            def = "";
        }
        in.close();
    }
    else
    {
        cout<< "File wasn't open!"<<endl;
    }
}

vector<string> divideAndRule(string phrase)
{
    vector <string> word;
    string buf;
    char a;
    for(int i = 0; i < phrase.length(); i++)
    {
        a = phrase[i];
        if(a != ' ' && i != phrase.length()-1)
        {
            buf +=a ;
        }
        else
        {
            if( i == phrase.length()-1)
                buf +=a ;
            word.push_back(buf);
            buf = "";
        }
    }
    return word;
}

void upperRegistr(vector<string>& word)
{
    string a;
    for(int i = 0; i < word.size(); i++)
    {
        for(int j = 0; j < word[i].length(); j++)
        {
            word[i][j] = toupper(word[i][j]);
        }
    }
    for(int i = 0; i < word.size(); i++)
    {
        cout<<word[i]<<endl;
    }
}

void outputResult(vector<string> word)
{
    for(int i = 0; i < word.size(); i++)
    {
        cout<<"Word : "<<word[i]<< endl;
        cout<<"Definition :  " <<HashTable.findEl(word[i])<<endl;
    }
}

void inputPhrase()
{
    string phrase;
    cout<<" Enter your word/phrase for translate and press 'Enter': "<<endl;
    getline(cin, phrase, '\n');
    cout<< endl;
    cout << phrase<<endl;
    vector<string> word = divideAndRule(phrase);
    upperRegistr(word);
    outputResult(word);
}
