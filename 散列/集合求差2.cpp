#include <cstdio>

const int MAXN = 10010;
int hashTable[MAXN] = {0};

int main() {
    int n, m, x;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        hashTable[x]++;
    }

    for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        if (hashTable[x]) hashTable[x]--;
    }

    bool first = true;
    for (int i = 1; i < MAXN; i++) {
        if(hashTable[i]) {
            for (int k = 0; k < hashTable[i]; k++) {
                if (!first) printf(" ");
                printf("%d", i);
                first = false;
            }
        }
    }

    return 0;
}