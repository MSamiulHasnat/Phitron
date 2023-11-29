#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

int* sort_it(int n){
    int* a = new int[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n, greater<int>());

    return a;
}

int main(){
    //write your code here
    int n;
    cin >> n;

    int* sortedArray = sort_it(n);
    
    for(int i = 0; i < n; i++) cout << sortedArray[i] << " ";

    delete[] sortedArray;
    return 0;
}