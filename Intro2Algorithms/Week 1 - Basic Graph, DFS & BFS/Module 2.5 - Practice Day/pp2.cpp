#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

vector<int> adjList[1000];
bool isVisited[1000];
vector<int> levelNode;

void bfs(int level){
    int src = 0;
    queue<pair<int, int>> q;

    q.push({src, 0});
    isVisited[src] = true;

    while(!q.empty()){
        pair<int, int> parentPair = q.front();
        q.pop();

        int node = parentPair.first;
        int newLevel = parentPair.second;

        if(newLevel == level){
            levelNode.push_back(node);
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

    int level;
    cin >> level;

    memset(isVisited, false, sizeof(isVisited));

    bfs(level);

    sort(levelNode.begin(), levelNode.end(), greater<int>());

    for(int i: levelNode) cout << i << " ";

    return 0;
}