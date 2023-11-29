#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

void print(int n, char c){
    for(int i = 0; i < n; i++){
        cout << c << " ";
    }
    cout << nl;
}

int main(){
    //write your code here
    int tc;
    cin >> tc;

    while(tc--){
        int n;
        char c;

        cin >> n >> c;
        print(n, c);
    }
    return 0;
}