#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main(){
    queue<string> qu;

    int q;
    cin >> q;

    while(q--){
        int n;
        cin >> n;

        if(n == 0){
            string s;
            cin >> s;

            qu.push(s);
        }
        else if(n == 1){
            if(qu.empty()){
                cout << "Invalid" << nl;
                continue;
            }
            cout << qu.front() << nl;
            if(!qu.empty()) qu.pop();
        }
    }
    return 0;
}