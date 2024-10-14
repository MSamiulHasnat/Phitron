#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main(){
    int n, q;
    cin >> n >> q;
    
    long long arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    while(q--){
        int l, r;
        cin >> l >> r;
        l--; r--;

        int sum = 0;
        for(int i = l; i <= r; i++){
            sum += arr[i];
        }
        cout << sum << nl;
    }
}