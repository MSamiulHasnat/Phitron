#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

void print(stringstream & ss){
    string word;
    if(ss >> word){
        print(ss);
        cout << word << nl;
        
    }
}

int main(){
    //write your code here
    string s;
    getline(cin, s);

    stringstream ss(s);
    print(ss);

    // int i = 10;
    // print(i);

    // cout << i << nl;
    return 0;
}