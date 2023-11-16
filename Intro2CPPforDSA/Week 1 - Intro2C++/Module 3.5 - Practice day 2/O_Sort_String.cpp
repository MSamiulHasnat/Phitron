#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

int main(){
    //write your code here
    int n;
    cin >> n;
    char str[n];

    for(int i = 0; i < n; i++){
        cin >> str[i];
    }

    sort(str,str+n);

    for(int i = 0; i < n; i++){
        cout << str[i];
    }
    return 0;
}
//Space limit exceeded