#include <cstdio>
using namespace std;

const int MAXN = 101;
int hashTable [MAXN] = {0};

int main() {
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        hashTable[x]++;
    }

    for (int i = 1; i <= 100; i++) {
        if (hashTable[i]) {
            printf("%d %d\n", i, hashTable[i]);
        }
    }

    return 0;
}