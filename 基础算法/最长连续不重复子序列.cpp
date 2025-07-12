/*
* @acwing app=acwing.cn id=801 lang=C++
*
* 799. 最长连续不重复子序列
*/

// @acwing code start
#include <iostream>
using namespace std;

const int MAXN = 100010;
int a[MAXN], s[MAXN];
int n;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int res = 0;
    for (int i = 0, j = 0; i < n; i++) 
    {
        s[a[i]]++;
        while (s[a[i]] > 1)
        {
            s[a[j]]--;
            j++;
        }
        res = max(res, i - j + 1);
    }

    printf("%d\n", res);

    return 0;
}

// @acwing code end