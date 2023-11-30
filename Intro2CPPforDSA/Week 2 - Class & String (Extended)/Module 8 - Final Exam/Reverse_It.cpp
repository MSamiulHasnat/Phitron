#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

class Student{
    public:
    string nm;
    int cls;
    char s;
    int id;

    // Student(string nm, int cls, char s, int id){
    //     this->nm = nm;
    //     this->cls = cls;
    //     this->s = s;
    //     this->id = id;
    // }
};

int main(){
    //write your code here
    int n;
    cin >> n;

    // string nm;
    // int cls, id;
    // char se;
    // cin >> nm >> cls >> se >> id;

    Student stu[n];
    for(int i = 0; i < n; i++){
        // stu[i](nm, cls, se, id);

        cin >> stu[i].nm >> stu[i].cls >> stu[i].s >> stu[i].id;
    }

    if(n % 2 == 0){
        for(int i = 0; i < n/2; i++){
            // for(int j = n - 1; j >= n/2; j--){
                
                swap(stu[i].s, stu[n - 1 - i].s);
            // }
        }
    }
    else {
        for(int i = 0; i < n/2; i++){
            for(int j = n - 1; j > n/2; j--){
                swap(stu[i].s, stu[j].s);
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << stu[i].nm << " " << stu[i].cls << " " << stu[i].s << " " << stu[i].id << nl;
    }

    return 0;
}