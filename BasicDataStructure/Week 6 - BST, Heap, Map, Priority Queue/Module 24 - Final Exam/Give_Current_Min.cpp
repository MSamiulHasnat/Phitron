#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> minQ;
    for (int i = 0; i < n; i++){
        int value;
        cin >> value;
        minQ.push(value);
    }

    int Query;
    cin >> Query;
    while (Query--){
        int command;

        cin >> command;
        if (command == 0){
            int x;
            cin >> x;
            minQ.push(x);
            cout << minQ.top() << nl;
        }
        else if (command == 1){
            if (!minQ.empty()) cout << minQ.top() << nl;
            else cout << "Empty" << nl;
        }
        else if (command == 2){
            if (!minQ.empty()){
                minQ.pop();
                if (!minQ.empty()) cout << minQ.top() << nl;
                else cout << "Empty" << nl;
            }
            else cout << "Empty" << nl;
        }
    }
    return 0;
}