#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

int main(){
    //write your code here
    string s;
    getline(cin, s);

    while(s.find("EGYPT") != -1){
        s.replace(s.find("EGYPT"), 5, " ");
    }
    cout << s << nl;

    return 0;
}