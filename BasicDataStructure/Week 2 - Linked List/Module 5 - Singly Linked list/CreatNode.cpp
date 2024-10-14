#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

class node{
    public:
        int value;
        node* next;
        node(int val){
            this->value = val;
            this->next = NULL;
        }
};

int main(){
    node a(10), b(20);

    a.next = &b;
    b.next = NULL;

    cout << a.value << nl;
    cout << a.next->value << nl;
}