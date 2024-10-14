#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main(){
    int n;
    cin >> n;
    
    vector<int> a;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    int m;
    cin >> m;

    vector<int> b;
    for(int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        b.push_back(temp);
    }
    int x;
    cin >> x;

    a.insert(a.begin() + x, b.begin(), b.end());

    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
}