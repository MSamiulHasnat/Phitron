#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

class Student{
    public:
    char name[100];
    int roll;
    double cpga;
};

int main(){
    //write your code here
    Student samiul;
    samiul.roll = 113;
    samiul.cpga = 3.58;

    char temp[100] = "Samiul Hasnat";
    strcpy(samiul.name, temp);

    cout << samiul.name;
    
    return 0;
}