#include <iostream>
#include <string>
using namespace std;

string s;

bool isPalindrome(int i, int j) {
    if (i >= j) return true;
    else return (s[i] == s[j] && isPalindrome(i + 1, j - 1));
}

int main() {
    cin >> s;
    cout << (isPalindrome(0, s.length() - 1) ? "Yes" : "No") << endl;

    return 0;
}