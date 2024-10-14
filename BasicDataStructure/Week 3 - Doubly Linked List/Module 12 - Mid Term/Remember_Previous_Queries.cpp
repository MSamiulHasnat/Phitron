#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main(){
    list<int> ListNode;

    int q;
    cin >> q;
    while(q--){
        int x, v;
        cin >> x >> v;

        if(x == 0){
            ListNode.push_front(v);
        }
        else if(x == 1){
            ListNode.push_back(v);
        }
        else if(x == 2 && v < ListNode.size()){
            ListNode.erase(next(ListNode.begin(), v));
        }
        cout<<"L -> ";
        for(int val: ListNode){
            cout<< val <<" ";
        }
        cout<<'\n';

        list<int> revList;
        revList = ListNode;
        revList.reverse();
        
        cout<<"R -> ";
        for(int val: revList){
            cout<< val << " ";
        }
        cout<<'\n';
    }
    return 0;
}