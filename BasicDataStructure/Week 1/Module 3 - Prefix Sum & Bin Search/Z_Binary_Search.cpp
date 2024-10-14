#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

int main(){
    //write your code here
    int n, q;
    cin >> n >> q;

    long long array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    // for(int i = 0; i < n - 1; i++){
    //     for(int j = i + 1; j < n; j++){
    //         if(array[i] > array[j]) swap(array[i], array[j]);
    //     }
    // }
    sort(array, array+n);

    while(q--){
        long long x;
        cin >> x;

        int l = 0, r = n-1;

        bool flag = false;
        
        while(l <= r){
            int MidIndex = (l+r) / 2;
            if(array[MidIndex] == x){
                flag = true;
                break;
            }

            if(x > array[MidIndex]){
                l = MidIndex+1;
            }
            else r = MidIndex-1;
        }
        
        if(flag == true) cout << "found" << nl;
        else cout << "not found" << nl;
    }
    return 0;
}