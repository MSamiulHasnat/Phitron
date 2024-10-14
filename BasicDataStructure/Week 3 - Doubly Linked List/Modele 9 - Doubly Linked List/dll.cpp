#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

class Node{
    public:
    int value;
    Node *prev;
    Node *next;

    Node(int value){
        this->value = value;
        prev = NULL;
        next = NULL;
    }
};

int size(Node *head){
    Node *temp = head;

    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void printNormal(Node *head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << nl;
}

void printReverse(Node *tail){
    Node *temp = tail;

    while(temp != NULL){
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << nl;
}

void insartAtPosition(Node *head, int position, int value){
    Node *newNode = new Node(value);
    Node *temp = head;

    for(int i = 1; i <= position - 1; i++){
        temp = temp->next;   
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;
}

void insartAtHead(Node *&head, Node *&tail, int value){
    Node *newNode = new Node(value);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;

    head = newNode;
}

void insartAtTail(Node *&head, Node *&tail, int value){
    Node *newNode = new Node(value);

    if(tail == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    
    tail->next = newNode;
    newNode->prev = tail;

    tail = newNode;
}

int main(){
{  //this 4 lines are for input and output .text files
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
}
    
    // Node *head = NULL;
    // Node *tail = NULL;

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    int position, value;
    cin >> position >> value;


    if(position == 0){
        insartAtHead(head, tail, value);
    }
    else if(position == size(head)){
        insartAtTail(head, tail, value);
    }
    else if(position > size(head)){
        cout << "Invalid" << nl;
    }
    else{
        insartAtPosition(head, position, value);
    }

    printNormal(head);
    printReverse(tail);

    return 0;
}