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

    vector<int> b;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        b.push_back(temp);
    }

    vector<int> c;
    c = b;

    c.insert(c.begin() + n, a.begin(), a.end());

    for(int i = 0; i < c.size(); i++){
        cout << c[i] << " ";
    }

    return 0;
}