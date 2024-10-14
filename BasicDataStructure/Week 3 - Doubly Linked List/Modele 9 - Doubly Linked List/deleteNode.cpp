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

void deleteAtPosition(Node *head, int position){
    Node *temp = head;

    for(int i = 0; i < position - 1; i++){
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;

    delete deleteNode;
}

void deleteTail(Node *&tail){
    Node *deleteNode = tail;
    tail = tail->prev;
    tail->next = NULL;

    delete deleteNode;
}

void deleteHead(Node *&head){
    head = head->next;
    delete head->prev;
    head->prev = NULL;
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

    int position;
    cin >> position;

    if(position >= size(head)){
        cout << "Invalid" << nl;
    }
    else if(position == 0){
        deleteHead(head);
    }
    else if(position == size(head) - 1){
        deleteTail(tail);
    }
    else deleteAtPosition(head, position);

    printNormal(head);
    printReverse(head);

    return 0;
}