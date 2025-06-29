#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

const int MAXN = 101;
int hashTable[MAXN] = {0};

int hashFunc(char c) {
    int id = c - 'a';
    return id;
}

int main() {
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        hashTable[hashFunc(str[i])]++;
    }

    for (int i = 0; i <= 100; i++) {
        if (hashTable[i]) printf("%c %d\n", 'a' + i, hashTable[i]);
    }

    return 0;
}