#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

int main(){
    //write your code here
    int tc;
    cin >> tc;

    while(tc--){
        int length;
        cin >> length;

        string s;
        cin >> s;

        int count[26] = {0};

        for(int i = 0; i < length; i++){
            if(count[s[i]-'A'] == 0){
                count[s[i] - 'A'] += 2;
            }
            else count[s[i] - 'A']++;
        }

        int sum = 0;
        for(int i = 0; i < 26; i++){
            sum += count[i];
        }
        cout << sum << nl;
    }
    return 0;
}