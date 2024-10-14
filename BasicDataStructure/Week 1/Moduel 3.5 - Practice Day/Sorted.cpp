#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;

        int array[n];
        for(int i = 0; i < n; i++){
            cin >> array[i];
        }

        bool flag = false;
        for(int i = 0; i < n-1; i++){
            if(array[i] > array[i+1]){
                flag = true;
                break;
            }
        }

        if(flag == true) cout << "NO" << nl;
        else cout << "YES" << nl;
    }
}