#include <cstdio>

void f(int n) {
    if (n == 0) printf(" �ҵ�С����");
    else {
        printf("����");
        f(n - 1);
        printf("����");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("�ŵ��ұ�����");
    f(n);

    return 0;
}