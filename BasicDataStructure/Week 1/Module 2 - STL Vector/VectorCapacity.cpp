#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

int main(){
    //write your code here
    {
    //this 4 lines are for input and output .text files
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 
    }

    vector<int> v;
    cout << v.max_size() << nl;
    cout << v.capacity() << nl;
    v.push_back(10);
    cout << v.capacity() << nl;
    v.push_back(10);
    cout << v.capacity() << nl;
    v.push_back(10);
    cout << v.capacity() << nl;
    v.push_back(10);
    cout << v.capacity() << nl;
    v.push_back(10);
    cout << v.capacity() << nl;
    v.push_back(10);
    cout << v.capacity() << nl;
    v.push_back(10);
    cout << v.capacity() << nl;
    v.push_back(10);
    cout << v.capacity() << nl;
    v.push_back(10);
    cout << v.capacity() << nl;
    
    return 0;
}