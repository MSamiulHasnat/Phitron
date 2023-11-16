#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

int main(){
    //write your code here
    int a, b;
    char s;

    cin >> a >> s >> b;

    if(s == '>' && a > b) cout << "Right" << nl;
    else if(s == '<' && a < b) cout << "Right" << nl;
    else if(s == '=' && a == b) cout << "Right" << nl;
    else cout << "Wrong" << nl;
    return 0;
}