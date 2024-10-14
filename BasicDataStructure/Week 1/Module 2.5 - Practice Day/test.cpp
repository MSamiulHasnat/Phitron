// Problem link - 
#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cmath>
#include <algorithm>
#include <vector>

#define nl '\n'

using namespace std;

int main(){
{
//this 4 lines are for input and output .text files
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
}
// My Code Starts Here         
    vector<int> a = {1, 2, 3};
    vector<int> b = {10, 20};

    a.insert(a.begin()+1, b.begin(), b.end());


    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }

    return 0;
}