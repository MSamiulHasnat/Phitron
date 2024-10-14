#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main(){
    int n, m;
    cin >> n >> m;

    stack<int> st;
    while(n--){
        int val;
        cin >> val;
        st.push(val);
    }

    queue<int> q;
    while(m--){
        int val;
        cin >> val;
        q.push(val);
    }

        if(st.size() != q.size()) cout << "NO" << nl;
        else{
            bool flag = true;
            while(!st.empty()){
                if(st.top() != q.front()){
                    flag = false;
                    break;
                }
                st.pop();
                q.pop();
            }
            if(flag) cout << "YES" << nl;
            else cout << "NO" << nl;
        }
    return 0;
}