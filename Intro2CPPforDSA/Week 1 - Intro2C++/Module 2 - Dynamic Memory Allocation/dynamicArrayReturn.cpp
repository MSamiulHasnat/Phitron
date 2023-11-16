#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

int* fun(){
    int *a = new int[5];

    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }

    return a;
}

int main(){
    //write your code here
    int *a = fun();

    for(int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }
return 0;
}