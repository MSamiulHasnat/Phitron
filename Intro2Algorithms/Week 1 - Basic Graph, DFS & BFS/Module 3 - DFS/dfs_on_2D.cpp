#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

char a[20][20];
bool isVisited[20][20];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;

bool valid(int ci, int cj){
    if(ci < 0 || ci >= n || cj < 0 || cj >= m){
        return false;
    }
    return true;
}

void dfs(int si, int sj){
    cout << si << " " << sj << nl;
    isVisited[si][sj] = true;
    for(int i = 0; i < 4; i++){
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci, cj) == true && isVisited[ci][cj] == false){
            dfs(ci, cj);
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

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int si, sj;
    cin >> si >> sj;

    memset(isVisited, false, sizeof(isVisited));

    dfs(si, sj);

    return 0;
}