#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

const int MAXN = 1000;
struct student {
    string name;
    int score, rank;
} stu[MAXN];

bool cmpName(student a, student b) {
    return a.name < b.name;
}

bool cmpScore(student a, student b) {
    return a.score > b.score;
}

int main() {
    int n, k, num = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        for (int j = 0; j < k; j++) {
            cin >> stu[num].name >> stu[num].score;
            num++;
        }
        sort(stu + num - k, stu + num, cmpScore);
        stu[num - k].rank = 1;
        for (int j = num - k + 1; j < num; j++) {
            if (stu[j].score == stu[j - 1].score) {
                stu[j].rank = stu[j - 1].rank;
            } else {
                stu[j].rank = j + 1 - (num - k);
            }
        }
    }
    sort(stu, stu + num, cmpName);

    for (int i = 0; i < num; i++) {
        cout << stu[i].name << " " << stu[i].score << " " << stu[i].rank << endl;

    }
    return 0;
}