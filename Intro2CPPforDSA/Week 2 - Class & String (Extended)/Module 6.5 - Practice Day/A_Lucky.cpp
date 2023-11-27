#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

int main(){
    //write your code here
    int tc;
    cin >> tc;

    while(tc--){
        string ticket;
        cin >> ticket;

        int FirstSum = 0;
        for(int i = 0; i < 3; i++){
            FirstSum += (ticket[i] - 48);
        }

        int LastSum = 0;
        for(int i = 3; i < 6; i++){
            LastSum += (ticket[i] - 48);
        }

        if(FirstSum == LastSum) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}