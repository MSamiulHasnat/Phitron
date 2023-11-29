#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

int main(){
    //write your code here
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        if(n % 2 != 0) cout << -1 << nl;
        else{
            int EvenCount = 0;
            for(int i = 0; i < n; i++){
                if(a[i] % 2 == 0) EvenCount++;
            }
            cout << abs(EvenCount - n/2) << nl;
        }
    }
    return 0;
}