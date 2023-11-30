#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

int main(){
    //write your code here
    string s;
    getline(cin, s);

    stringstream ss(s);

    string check;
    int count = 0;
    while(ss >> check){
        if(check == "Jessica") count++;
    }

    if(count == 0) cout << "NO" << nl;
    else cout << "YES" << nl;
    
    return 0;
}