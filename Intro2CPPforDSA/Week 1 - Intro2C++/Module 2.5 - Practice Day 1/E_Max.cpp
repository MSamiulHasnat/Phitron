#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

int main(){
    //write your code here
    int n;
    cin >> n;
    int array[n];

    for(int i = 0; i < n; i++) cin >> array[i];

    int m = array[0];
    for(int i = 0; i < n; i++){
        m = max(m, array[i]);
    }
    cout << m << "\n";
    return 0;
}