#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

int main(){
    //write your code here
    string a;
    getline(cin, a);

    stringstream sp(a);
    string r;

    int count = 0;
    while(sp >> r){
        // cout << r << nl;
        count++;
    }
    cout << count << nl;
    return 0;
}