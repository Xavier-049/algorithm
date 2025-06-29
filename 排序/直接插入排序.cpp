#include <cstdio>
using namespace std;

const int MAXN = 60;
int a[MAXN], n;

void insertSort() {
    for (int i = 1; i < n; i++) {
        int tmp = a[i];
        int j = i;
        while (j - 1 >= 0 && a[j - 1] > tmp) {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = tmp;
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    insertSort();
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        printf(i < n - 1 ? " " : "\n");
    }
    return 0;
}