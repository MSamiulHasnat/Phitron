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

    int count = 0;
    for(int i = 0; i < a.size(); i++){
        if(find(a.begin(), a.end(), a[i] + 1) != a.end()){
            count++;
        }
    }
    cout << count << nl;
    return 0;
}