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

    queue<int> st2;
    int m;
    cin >> m;
    while(m--){
        int val;
        cin >> val;
        st2.push(val);
    }

    bool flag = true;
    if(st.size() != st2.size()) cout << "NO" << nl;
    else{

        while(!st.empty()){
            int s = st.top();
            int q = st2.front();

            if(s != q){
                flag = false;
                break;
            }
            
            st.pop();
            st2.pop();
        }

        if(flag) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
}