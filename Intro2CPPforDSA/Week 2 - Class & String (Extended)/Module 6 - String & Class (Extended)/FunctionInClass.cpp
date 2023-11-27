#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

class Person{
    public:

        string name;
        int age;

        Person(string nm, int ag){
            name = nm;
            age = ag;
        }

        void hello(){
            cout << "hi, i'm samiul speaking" << nl;
        }

};

int main(){
    //write your code here

    string name;
    int age;
    cin >> name >> age;

    Person samiul(name, age);
    cout << samiul.age << " " << samiul.name << nl;

    samiul.hello();
    return 0;
}