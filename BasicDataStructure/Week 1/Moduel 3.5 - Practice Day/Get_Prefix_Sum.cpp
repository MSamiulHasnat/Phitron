#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main(){
    int n;
    cin >> n;

    long long array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    long long prefix[n];
    prefix[0] = array[0];

    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i - 1] + array[i];
    }

    for(int i = n - 1; i >= 0; i--){
        cout << prefix[i] << " ";
    }
}