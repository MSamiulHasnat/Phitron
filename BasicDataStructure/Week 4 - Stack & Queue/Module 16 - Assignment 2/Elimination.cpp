#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
int main()
{
    int test;
    cin >> test;
    while (test--){
        string s;
        cin >> s;

        stack<char> myStack;

        for (char c : s){
            if (!myStack.empty() && myStack.top() == '0' && c == '1'){
                myStack.pop();
            }
            else myStack.push(c);
        }

        if (myStack.empty()) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
    return 0;
}