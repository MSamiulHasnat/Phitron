#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

int main(){
    //write your code here
    int n;
    cin >> n;

    vector<int> a;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    reverse(a.begin(), a.end());

    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << nl;
    return 0;
}