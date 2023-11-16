#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

int main(){
    //write your code here
    int *a = new int[5];
    int *b = new int[5];
    
    for(int i = 0; i < 5; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    delete[] a;
    a = new int[7];

    for(int i = 0; i < 7; i++){
        a[i] = b[i];
    }
    
    delete[] b;

    cin >> a[5] >> a[6];

    for(int i = 0; i < 7; i++){
        cout << a[i] << " ";
    }
return 0;
}