#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

vector<int> adjList[1000];
bool isVisited[1000];

void dfs(int src){
    isVisited[src] = true;

    cout << src << " ";

    for(int child : adjList[src]){
        if(!isVisited[child]){
            dfs(child);
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

        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    int src;
    cin >> src;

    memset(isVisited, false, sizeof(isVisited));
    dfs(src);

    return 0;
}