#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

class Student{
    public:
    int roll;
    int cls;
    double gpa;
    Student(int r, int c, double g){ //This is called constructor
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main(){
    //write your code here
    Student samiul(112, 14, 3.55);
    cout << samiul.roll<<" "<<samiul.cls<<nl;
    return 0;
}