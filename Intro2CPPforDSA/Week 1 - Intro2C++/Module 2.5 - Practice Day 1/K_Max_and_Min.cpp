#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

int main(){
    //write your code here
    int a, b, c;
    cin >> a >> b >> c;
    cout << max({a, b, c}) << " " << min({a, b, c}) << nl;
    return 0;
}