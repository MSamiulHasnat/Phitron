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

    vector<int> mat[n];

    while(e--){
        int a, b;
        cin >> a >> b;
        
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    int x;
    cin >> x;
    for(int i = 0; i < mat[x].size(); i++){
        cout << mat[x][i] << " ";
    }
    return 0;
}