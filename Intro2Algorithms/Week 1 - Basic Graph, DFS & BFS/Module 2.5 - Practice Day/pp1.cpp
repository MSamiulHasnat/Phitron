#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

vector<int> adjList[1000];
bool isVisited[1000];
int distant[1000];

void bfs(int src, int des){
    queue<pair<int, int>> q;

    q.push({src, 0});
    isVisited[src] = true;

    while(!q.empty()){
        pair<int, int> parentPair = q.front();
        q.pop();

        int node = parentPair.first;
        int level = parentPair.second;

        if(node == des){
            cout << level << nl;
            return;
        }

        for(int child: adjList[node]){
            if(!isVisited[child]){
                q.push({child, level+1});
                isVisited[child] = true;
            }
        }
    }
    cout << "-1" << nl;
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

    int query;
    cin >> query;

    while(query--){
        int src, des;
        cin >> src >> des;

        memset(isVisited, false, sizeof(isVisited));

        bfs(src, des);
    }

    return 0;
}