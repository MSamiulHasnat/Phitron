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

    sort(array, array + n);

    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << nl;

    sort(array, array + n, greater<int>());

    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << nl;
    
    return 0;
}