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
    long long prefix[n];
    prefix[0] = arr[0];

    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }

    while(q--){
        int l, r;
        cin >> l >> r;
        l--; r--;

        long long sum = 0;
        if(l == 0){
            sum = prefix[r];
        }
        else{
            sum = prefix[r] - prefix[l - 1];
        }
        
        cout << sum << nl;
    }
}