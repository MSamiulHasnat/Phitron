#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

vector<int> v[1000];
bool vis[1000];

void bfs(int src){
    queue<int> q;

    q.push(src);
    vis[src] = true;

    while(!q.empty()){
        int parent = q.front();
        q.pop();

        cout << parent << nl;

        for(int child : v[parent]){
            if(vis[child] == false){
                q.push(child);
                vis[child] = true;
            }
        }
    }
}

int main(){
{  //this 4 lines are for input and output .text files
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
}
    int n, e;
    cin >> n >> e;
    
    while(e--){
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    int src;
    cin >> src;

    memset(vis, false, sizeof(vis));

    bfs(src);
    return 0;
}