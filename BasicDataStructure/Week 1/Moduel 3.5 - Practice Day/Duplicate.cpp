#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main(){
    int n;
    cin >> n;

    vector<long long> v;
    for(int i = 0; i < n; i++){
        long long temp;
        cin >> temp;
        v.push_back(temp);
    }

    bool flag = false;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(v[i] == v[j]){
                flag = true;
                break;
            }
        }
    }
    if(flag){
        cout << "YES" << nl;
    }
    else{
        cout << "NO" << nl;
    }
}