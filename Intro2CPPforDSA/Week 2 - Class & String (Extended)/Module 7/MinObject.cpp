#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

class Student{
public:
    string name;
    int roll;
    int marks;
};

int main(){
    int n;
    cin >> n;

    Student a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    Student minimum;
    minimum.marks = INT_MAX;
    for(int i = 0; i < n; i++){
        if(a[i].marks < minimum.marks) minimum = a[i];
    }
    cout << minimum.name << " " << minimum.roll << " " << minimum.marks << nl;
    
    return 0;
}