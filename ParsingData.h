#pragma once

#include <string>
#include <fstream>
#include <string>
#include <vector>
#include "HashTable.h"

using namespace std;

void parsing(HashTable& hashTable);
vector<string> divideAndRule(string& phrase);
void upperRegistr(vector<string>& word);
void inputPhrase(HashTable& hashTable);