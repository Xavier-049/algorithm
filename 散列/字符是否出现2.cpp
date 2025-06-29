#include <iostream>
#include <string>
using namespace std;

const int MAXN = 1010;
int hashTable[MAXN] = {0};

int hashFunc(char c) {
    int id = 0;

    if (c >= 'a' && c <= 'z') id = c - 'a';
    else if (c >= 'A' && c <= 'Z') id = c - 'A' + 26;
    else if (c >= '0' && c <= '9') id = c - '0' + 52;
    else id = 62;

    return id;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.length(); i++) {
        hashTable[hashFunc(s1[i])] = 1;
    }

    for (int i = 0; i < s2.length(); i++) {
        printf("%d", hashTable[hashFunc(s2[i])]);
        if (i < s2.length() - 1) printf(" ");
    }

    return 0;
}