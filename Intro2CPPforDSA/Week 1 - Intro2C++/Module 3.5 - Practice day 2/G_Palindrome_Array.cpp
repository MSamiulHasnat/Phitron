#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

int main(){
    //write your code here
    int n;
    cin >> n;

    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    int i = 0;
    int j = n - 1;

    int flag = 0;
    while(i < j){
        if(array[i] != array[j]) flag = 1;
        
        i++;
        j--;
    }

    if(flag == 0) cout << "YES" << nl;
    else cout << "NO" << nl;
    return 0;
}