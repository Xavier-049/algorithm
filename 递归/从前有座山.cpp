#include <cstdio>

void f(int n) {
    if (n == 0) printf("�����õĹ��°������ȥ˯��������\n");
    else {
        printf("��ǰ����ɽ��ɽ��������\n");
        printf("������һ���Ϻ��к�һ��С����\n");
        printf("˯ǰ�Ϻ��и�С���н����£�\n");
        f(n - 1);
        printf("Ȼ���Ϻ��к�С���о�˯����\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    f(n);

    return 0;
}