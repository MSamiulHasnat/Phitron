#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main(){
    stack<int> st;
    int n;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        st.push(val);
    }

    stack<int> newST;
    while(!st.empty()){
        newST.push(st.top());
        st.pop();
    }

    while(!newST.empty()){
        cout << newST.top() << " ";
        newST.pop();
    }
    cout << nl;
}