#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

class myStack{
public:
    list<int> l;

    void push(int val){
        l.push_back(val);
    }
    void pop(){
        l.pop_back();
    }
    int top(){
        return l.back();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        if (l.size() == 0) return true;
        else return false;
    }
};

class myQueue{
public:
    list<int> l;

    void push(int val){
        l.push_back(val);
    }
    void pop(){
        l.pop_front();
    }
    int front(){
        return l.front();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return l.empty();
    }
};

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