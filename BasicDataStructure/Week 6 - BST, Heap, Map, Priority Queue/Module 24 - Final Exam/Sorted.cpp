#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main(){
    int tc; 
    cin >> tc;
    while(tc--){
        set<int> s;
        int n;
        cin >> n;
        while(n--){
            int a;
            cin >> a;
            s.insert(a);
        }
        for(auto it = s.begin(); it != s.end(); it++){
            cout << *it << " ";
        }
        cout << nl;
    }
    return 0;
}