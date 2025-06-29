#include <iostream>
#include <string>
using namespace std;

int hashFunc(char c) {
    int id = c - 'a';
    return id;
}

const int MAXN = 1000;
int hashTable[MAXN] = {0};

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