#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

class Node{
    public:

    int value;
    Node *next;
    Node *prev;

    Node(int value){
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

int main(){
    {  //this 4 lines are for input and output .text files
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 
    }

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;

    a->next = b;
    a->prev = head;

    b->prev = a;

    Node *temp = head;
    while(temp != NULL){
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << nl;
    
    temp = b;
    while(temp != NULL){
        cout << temp->value << " ";
        temp = temp->prev;
    }
    return 0;
}