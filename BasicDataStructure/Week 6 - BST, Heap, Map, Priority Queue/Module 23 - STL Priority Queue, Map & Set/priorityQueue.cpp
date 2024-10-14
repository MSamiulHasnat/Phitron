#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main(){
{  //this 4 lines are for input and output .text files
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
}

    priority_queue<int> pq;
    while(true){
        int command;
        cin >> command;

        if(command == 0){ //insart korbo
            int x; 
            cin >> x;
            pq.push(x);
        }
        else if(command == 1){  //delete korbo
            pq.pop();
        }
        else if(command == 2){ 
            cout << pq.top() << nl;
        }
        else if(command == 3) break;
    }
    return 0;
}