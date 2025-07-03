#include <iostream>
#include <string>
using namespace std;

string s;

string reverseString(int n) {
    if (n == 1) return s.substr(0, 1);
    else return s.substr(n - 1, 1) + reverseString(n - 1);
}

int main() {
    cin >> s;
    cout << reverseString(s.size()) << endl;

    return 0;
}