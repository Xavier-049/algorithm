#include <cstdio>
#include <algorithm>
using namespace std;

const int MAXN = 30;
int n, a[MAXN][MAXN];

int getMax(int i, int j) {
    if (i == n) return a[i][j];
    else return max(getMax(i + 1, j), getMax(i + 1, j + 1)) + a[i][j];
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            scanf("%d", &a[i][j]);

    printf("%d\n", getMax(1, 1));

    return 0;
}
