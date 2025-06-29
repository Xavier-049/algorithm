#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

const int MAXN = 50;
int n;
string str[MAXN];

bool cmp(string a, string b) {
    if (a != b) return a > b;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> str[i];

    sort(str, str + n, cmp);

    for (int i = 0; i < n; i++) cout << str[i] << endl;

    return 0;
}