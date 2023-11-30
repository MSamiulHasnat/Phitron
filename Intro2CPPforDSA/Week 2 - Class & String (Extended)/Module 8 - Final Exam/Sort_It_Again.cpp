#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

class Student{
    public:

    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student a, Student b){
    if(a.eng_marks == b.eng_marks){
        if(a.math_marks == b.math_marks){
            return a.id < b.id;
        }
        else return a.math_marks > b.math_marks;
    }
    else {
        return a.eng_marks > b.eng_marks;
    }
}

int main(){
    //write your code here
    int n;
    cin >> n;

    Student stu[n];
    for(int i = 0; i < n; i++){
        cin >> stu[i].nm >> stu[i].cls >> stu[i].s >> stu[i].id >> stu[i].math_marks >> stu[i].eng_marks;
    }

    sort(stu, stu+n, cmp);

    for(int i = 0; i < n; i++){
        cout << stu[i].nm << " " << stu[i].cls << " " << stu[i].s << " " << stu[i].id << " " << stu[i].math_marks << " " << stu[i].eng_marks << nl;
    }
    
    return 0;
}