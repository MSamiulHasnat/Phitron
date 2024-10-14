//Problem link - https://www.geeksforgeeks.org/problems/level-of-nodes-1587115620/1

#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

class Solution
{
	public:
	//Function to find the level of node X.
    
	
	int bfs(vector<int> adj[], int v, int x, bool isVisited[]){
	    queue<pair<int, int>> q;

        q.push({x, 0});
        isVisited[x] = true;

        while(!q.empty()){
            pair<int, int> parent = q.front();
            q.pop();
            int node = parent.first;
            int level = parent.second;

            if(node == x) return level;

            for(int child : adj[node]){
                if(!isVisited[child]){
                    q.push({child, level+1});
                    isVisited[child] = true;
                }
            }
        }
        return -1;
	}
	
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	    bool isVisited[V];
        memset(isVisited, false, sizeof(isVisited));
        return bfs(adj, V, X, isVisited);
	}
};