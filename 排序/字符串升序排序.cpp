#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

const int MAXN = 50;
int n;
string s[MAXN];



int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> s[i];

    sort(s, s + n);

    for (int i = 0; i < n; i++) cout << s[i] << endl;

    return 0;
}