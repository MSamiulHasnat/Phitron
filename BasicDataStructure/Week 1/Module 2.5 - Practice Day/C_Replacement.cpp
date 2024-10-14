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

    for(int i = 0; i < a.size(); i++){
        if(a[i] > 0) a[i] = 1;
        else if(a[i] == 0) a[i] = 0;
        else a[i] = 2;
    }

    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << nl;
    
    return 0;
}