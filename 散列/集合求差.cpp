#include <cstdio>

const int MAXN = 10010;
bool hashTable[MAXN] = {false};

int main() {
    int n, m, x;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        hashTable[x] = true;
    }

    for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        if (hashTable[x]) hashTable[x] = false;
    }

    bool first = true;
    for (int i = 1; i < MAXN; i++) {
        if (hashTable[i]) {
            if (!first) printf(" ");
            printf("%d", i);
            first = false;
        }
    }

    return 0;
}