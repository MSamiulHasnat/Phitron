#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, s; cin>>n>>s;
    int arr[n];
    for(int i = 0; i<n; i++)cin>>arr[i];

    for(int i = 0; i<n-2; i++) {
        for(int j = i+1; j<n-1; j++){
            for(int k = j+1; k<n; k++){
                    if(arr[i]+arr[j]+arr[k]==s){
                        cout<<"YES"<<'\n';
                        return;
                    }
                
            }
        }
    }
    cout<<"NO"<<'\n';
}
int main() {
    int t; cin>>t;
    for(int i = 1; i<=t; i++) {
        solve();
    }
    return 0;
}