#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

class Student{
    public:

    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa){
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student* fun(){
    Student* hasnat = new Student(114, 15, 3.55); //this is a dynamic array
    return hasnat;
}

int main(){
    //write your code here
    Student samiul(113, 14, 3.54);
    
    Student* hasnat = fun();

    cout << samiul.roll << " " << samiul.cls << " " << samiul.gpa << nl;
    cout << hasnat->roll << " " << hasnat->cls << " " << hasnat->gpa << nl;

    delete hasnat;
    return 0;
}