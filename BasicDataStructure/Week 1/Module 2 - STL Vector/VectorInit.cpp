#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

int main(){
    {
    //this 4 lines are for input and output .text files
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 
    }

    //write your code here
    vector<int> v(5, 10);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    cout << v.size();
    return 0;
}

