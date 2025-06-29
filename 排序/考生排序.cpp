#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

const int MAXN = 1000;

struct Student {
    string name;
    int score;
} stu[MAXN];

int n;

bool cmp(Student a, Student b) {
    if (a.score != b.score) return a.score > b.score;
    else return a.name < b.name;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> stu[i].name >> stu[i].score;
    sort(stu, stu + n, cmp);
    for (int i = 0; i < n; i++)
        cout << stu[i].name << " " << stu[i].score << endl;

    return 0;
}