#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

class Node{
    public:

    int value;
    Node *next;

    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};

void insartAtTail(Node *&head, int value){
    Node *newNode = new Node(value);
    Node *temp = head;

    if(head == NULL){
        head = newNode;
        return;
    }

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
}

void printList(Node *head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp->value << " ";
        temp = temp->next;
    }
}

int main(){
    Node *head = NULL;

    while(true){
        int value;
        cin >> value;
        if(value == -1) break;

        insartAtTail(head, value);
    }

    printList(head);
    cout << nl;

    return 0;
}