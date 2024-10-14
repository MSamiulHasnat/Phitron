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

    list<int> hisList(10, 7);    
    list<int> myList(hisList);


    for(auto itarator = myList.begin(); itarator != myList.end(); itarator++){
        cout << *itarator << nl;
    }
    
    return 0;
}