#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

int main(){
    //write your code here
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a, a+n);
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << nl;

    sort(a, a+n, greater<int>());
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << nl;
    
    return 0;
}