#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

const int MAXN = 1000;

struct Student {
    string name;
    int score1;
    int score2;
} stu[MAXN];

int n, flag;

bool cmp (Student a, Student b) {
    if (flag == 1) {
        if (a.score1 != b.score1) return a.score1 > b.score1;
        else return a.name < b.name; 
    } else {
        if (a.score2 != b.score2) return a.score2 > b.score2;
        else return a.name < b.name; 
    }
}



int main() {
    cin >> n >> flag;
    for (int i = 0; i < n; i++)
        cin >> stu[i].name >> stu[i].score1 >> stu[i].score2;
    sort(stu, stu + n, cmp);
    for (int i = 0; i < n; i++) 
        cout << stu[i].name << " " << stu[i].score1 << " " << stu[i].score2 << endl;

    return 0;
}