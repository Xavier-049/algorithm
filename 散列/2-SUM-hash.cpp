#include <cstdio>

const int MAXN = 100010;
const int MAXK = 1000010;

int a[MAXN], hashTable[MAXK] = {false};

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        hashTable[a[i]] = true;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (k - a[i] >= 0 && hashTable[k - a[i]]) {
            ans++;
        }
    }
    printf("%d\n", ans / 2);

    return 0;
}