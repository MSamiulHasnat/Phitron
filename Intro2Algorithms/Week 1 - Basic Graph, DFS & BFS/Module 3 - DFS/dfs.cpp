#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

const int N = 1e5+5;

vector<int> v[N];
bool isVisited[N];

void dfs(int src){
    cout << src << nl;
    isVisited[src] = true;

    for(int i = 0; i < v[src].size(); i++){
        int child = v[src][i];
        
        if(isVisited[child] == false) dfs(child);
    }
}

int main(){
    int n, e;
    cin >> n >> e;

    while(e--){
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    memset(isVisited, false, sizeof(isVisited));

    dfs(0);

    return 0;
}