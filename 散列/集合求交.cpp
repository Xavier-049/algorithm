#include <cstdio>

const int MAXN = 10010;
int a[MAXN], hashTable[MAXN] = {false};

int main() {
    int n, m, x;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        hashTable[x] = true;
    }

    bool first = true;
    for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        if (hashTable[x]) {
            if (!first) printf(" ");
            a[i] = x;
            printf("%d", a[i]);
            first = false;
        }
    }

    return 0;
}