#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main(){
    int n;
    cin >> n;

    int a[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) cout << "\\";
            
        }
    }

    // for(int line = 0; line < n/2; line++){
    //     for(int i = 1; i <= line; i++) cout << " ";
    //     cout << "\\";

    //     for(int i = 0; i < (n - line*2) - 2; i++) cout << " ";

    //     cout << "\/" << nl;
    // }
    // for(int i = 0; i < n/2; i++) cout << " ";
    // cout << "X" << nl;

    // for(int line = n/2 - 1; line > 0; line--){
    //     for(int i = line; i < (n/2) - 1; i++) cout << " ";
    //     cout << "\/";
    //     for(int i = (n - line*2) - 2; i > 0; i--) cout << "*";
    // }
    // cout << nl;
}