#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

int main(){
    //write your code here
    vector<int> x = {10, 20, 30};
    vector<int> v = {1, 2, 3};

    v = x;

    for(int i = 0; i < 3; i++){
        cout << v[i] << " ";
    }
    return 0;
}