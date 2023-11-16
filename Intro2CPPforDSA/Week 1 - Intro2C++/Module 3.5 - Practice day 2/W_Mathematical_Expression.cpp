#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

int main(){
    //write your code here
    int a, b, c;
    char s, q;

    cin >> a >> s >> b >> q >> c;

    if(s == '+'){
        if(c == a + b) cout << "Yes" << nl;
        else cout << a + b << nl;
    }
    else if(s == '-'){
        if(c == a - b) cout << "Yes" << nl;
        else cout << a - b << nl;
    }
    else if(s == '*'){
        if(c == a * b) cout << "Yes" << nl;
        else cout << a * b << nl;
    }
    
    return 0;
}