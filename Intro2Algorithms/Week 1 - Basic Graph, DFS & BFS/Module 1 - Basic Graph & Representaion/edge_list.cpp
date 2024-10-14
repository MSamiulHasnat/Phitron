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

    vector<pair<int, int>> v;

    while(e--){
        int a, b;
        cin >> a >> b;

        v.push_back({a, b});
    }

    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << " " << v[i].second << nl;
    }

    cout << nl << nl;

    for(pair<int, int> p : v){
        cout << p.first << " " << p.second << nl;
    }
    return 0;
}