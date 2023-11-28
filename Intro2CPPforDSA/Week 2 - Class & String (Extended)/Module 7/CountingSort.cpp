#include <bits/stdc++.h>

#define nl '\n'

using namespace std;

int main(){
{
//this 4 lines are for input and output .text files
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
}
// My Code Starts Here         
    string s;
    cin >> s;

    int frq[26] = {0};

    for(char c : s){
        frq[c - 'a']++;
    }

    for(char i = 'a'; i < 'z'; i++){
        cout << i << " - " << frq[i - 'a'] << nl;
    }

    for(char i = 'a'; i < 'z'; i++){
        for(int j = 0; j < frq[i - 'a']; j++){
            cout << i;
        }
    }
    return 0;
}