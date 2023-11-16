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

        int array[n];
        for(int i = 0; i < n; i++){
            cin >> array[i];
        }

        long long int min = 10e17;
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                int result = array[i] + array[j] + j - i;

                if(min > result) min = result;
            }
        }
        cout << min << nl;
    }
    return 0;
}