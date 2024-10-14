#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

int main(){
    //write your code here
    string s;
    cin >> s;

    vector<int> a(26, 0);

    for(int i = 0; i < s.size(); i++){
        a[s[i] - 'a']++;
    }

    for(int i = 0; i < a.size(); i++){
        if(a[i] != 0) cout << char(i + 'a') << " : " << a[i] << nl;
    }

    return 0;
}