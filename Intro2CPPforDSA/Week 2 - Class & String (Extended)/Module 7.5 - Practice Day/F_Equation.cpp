#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

void print(long long int x, long long int n){
    long long int s = 0;

    for(int i = 2; i <= n; i += 2){
        long long int temp = 1;
        for(int j = 1; j <= i; j++){
            temp *= x;
        }
        s += temp;
    }
    cout << s << nl;
}

int main(){
    //write your code here
    long long int x, n;
    cin >> x >> n;

    print(x, n);
    return 0;
}