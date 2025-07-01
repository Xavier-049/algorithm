#include <cstdio>
#include <algorithm>>
using namespace std;

const int MAXN = 110;
int a[MAXN], n;

int findMax(int i) {
    if (i == 0) return a[i];
    else {
        return max(findMax(i - 1), a[i]);
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("%d\n", findMax(n - 1));

    return 0;
}