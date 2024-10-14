#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

class node
{
public:
    int value;
    node* next;

    node(int value){
        this->value = value;
        this->next = NULL;
    }
};

int main(){
    //write your code here
    node* head = new node(10);
    node* a = new node(20);

    head->next = a;

    cout << head->value << nl;
    cout << head->next->value << nl;
    return 0;
}