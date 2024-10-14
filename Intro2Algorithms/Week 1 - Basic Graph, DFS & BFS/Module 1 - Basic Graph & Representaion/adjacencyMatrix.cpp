#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main(){
{  //this 4 lines are for input and output .text files
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
}

    int n, e;
    cin >> n >> e;

    int mat[n][n];
    memset(mat, 0, sizeof(mat));

    while(e--){
        int a, b;
        cin >> a >> b;

        mat[a][b] = 1;
        mat[b][a] = 1;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << mat[i][j] << " ";
        }
        cout << nl;
    }
    return 0;
}