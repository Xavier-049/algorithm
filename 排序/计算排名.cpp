#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int MAXN = 1000;
struct Student {
    int score;
    int rank;
} stu[MAXN];

bool cmp(Student a, Student b) {
    if (a.score != b.score) return a.score > b.score;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &stu[i].score);

    sort(stu, stu + n, cmp);

     stu[0].rank = 1;
     for (int i = 1; i < n; i++) {
         if (stu[i].score == stu[i - 1].score)
             stu[i].rank = stu[i - 1].rank;
         else stu[i].rank = i + 1;
     }

    for (int i = 0; i < n; i++) {
        cout << stu[i].score << " " << stu[i].rank << endl;
    }

    return 0;
}