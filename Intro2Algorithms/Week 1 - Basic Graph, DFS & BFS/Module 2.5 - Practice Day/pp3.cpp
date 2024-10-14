#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

vector<int> adjList[1000];
bool isVisited[1000];

void bfs(int n){
    int src = 0;
    queue<pair<int, int>> q;

    q.push({src, 0});
    isVisited[src] = true;

    int count = 0;

    while(!q.empty()){
        pair<int, int> parentPair = q.front();
        q.pop();

        int node = parentPair.first;
        int newLevel = parentPair.second;

        if(newLevel == n){
            count++;
        }

        for(int child: adjList[node]){
            if(!isVisited[child]){
                q.push({child, newLevel+1});
                isVisited[child] = true;
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

        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    int n;
    cin >> n;

    memset(isVisited, false, sizeof(isVisited));

    bfs(n);

    return 0;
}