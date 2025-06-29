#include <cstdio>

const int MAXN = 1010;
char S[MAXN][5], tmp[5];
int hashTable[26 * 26 * 26 + 10];

int hashFunc(char S[], int len) {
    int id = 0;
    for (int i = 0; i < len; i++) {
        id = id * 26 + (S[i] - 'A');
    }
    return id;
}

int main() {
    int n, m;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", &S[i]);
        int id = hashFunc(S[i], 3);
        hashTable[id]++;
    }

    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%s", tmp);
        int id = hashFunc(tmp, 3);
        printf("%d", hashTable[id]);
        if (i < m - 1) printf(" ");
    }

    return 0;
}