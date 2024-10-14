#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

vector<int> v[1000];
bool visited[1000];
int level[1000];
int parentArray[1000];

void bfs(int src){
    queue<int> q;

    q.push(src);
    visited[src] = true;
    level[src] = 0;

    while(!q.empty()){
        int parent = q.front();
        q.pop();

        for(int child : v[parent]){
            if(visited[child] == false){
                q.push(child);
                visited[child] = true;
                level[child] = level[parent] + 1;
                parentArray[child] = parent;
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
    
    int node, edge;
    cin >> node >> edge;

    while(edge--){
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    int src, des;
    cin >> src >> des;

    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    memset(parentArray, -1, sizeof(parentArray));

    bfs(src);

    int x = des;
    vector<int> path;
    while (x != -1){
        path.push_back(x);
        x = parentArray[x];
    }

    reverse(path.begin(), path.end());
    for (int val : path){
        cout << val << " ";
    }
    return 0;
}