#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

int main(){
    //write your code here
    int tc;
    cin >> tc;

    while(tc--){
        string s, x;
        cin >> s >> x;

        while(s.find(x) != -1){
            s.replace(s.find(x), x.size(), "#");
        }
        cout << s << nl;
    }
    
    return 0;
}