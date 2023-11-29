#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class student {
public:
    int id;
    string name;
    char sec;
    int marks;
};

bool cmp(student st1, student st2) {
    if (st1.marks == st2.marks) {
        return st1.id < st2.id;
    }
    else {
        return st1.marks > st2.marks;
    }
}

void uttor() {
    int n = 3;

    student *st = new student[n];

    for (int i = 0; i < n; i++) {
        cin >> st[i].id >> st[i].name >> st[i].sec >> st[i].marks;
    }

    sort(st, st + n, cmp);

    cout << st[0].id << " " << st[0].name << " " << st[0].sec << " " << st[0].marks << '\n';

    delete[] st;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        uttor();
    }

    return 0;
}