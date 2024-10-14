#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

vector<int> v[1000];
bool vis[1000];
int level[1000];

void bfs(int src){
    queue<int> q;

    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while(!q.empty()){
        int parent = q.front();
        q.pop();

        cout << parent << nl;

        for(int child : v[parent]){
            if(vis[child] == false){
                q.push(child);
                vis[child] = true;
                level[child] = level[parent] + 1;
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
    memset(level, -1, sizeof(level));

    bfs(src);

    for(int i = 0; i < n; i++){
        cout << level[i] << " ";
    }
    return 0;
}