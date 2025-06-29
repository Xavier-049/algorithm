#include <cstdio>

using namespace std;

const int MAXN = 1010;
int hashTable[MAXN] = {0};

int main() {
    int n, m, x;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        hashTable[x] = 1;
    }

    for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        printf("%d", hashTable[x]);
        if (i < m - 1) printf(" ");
    }

    return 0;
}