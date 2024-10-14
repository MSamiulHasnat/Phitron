#include <bits/stdc++.h>

using namespace std;

#define nl '\n'

class node{
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
    node* b = new node(30);
    node* c = new node(40);
    node* d = new node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    node* temp = head;

    while(temp != NULL){
        cout << temp->value << nl;
        temp = temp->next;
    }
    cout << a->next->value;

    return 0;
}