#include <cstdio>
#include <algorithm>
using namespace std;
bool cmp(int a, int b) {
    if (a != b) return a < b;
}

const int MAXN = 50;
int a[MAXN], n;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        printf(i < n - 1 ? " " : "\n");
    }

    return 0;
}