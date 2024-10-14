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

void insartAtHead(Node *&head, int value){
    Node *newNode = new Node(value);

    newNode->next = head;
    head = newNode;
}

void insartAtTail(Node *&head, int value){
    Node *newNode = new Node(value);

    if(head == NULL){
        insartAtHead(head, value);
        return;
    }

    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    
}

int size(Node *head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}

void deleteFromAnyPosition(Node *&head, int position){
    if(position >= size(head)){
        return;
    }

    Node *temp = head;
    
    if(position == 0){
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }

    for(int i = 0; i < position - 1; i++) temp = temp->next;

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

void printList(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << nl;
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;

    int q = 4;
    cin >> q;

    while(q--){
        int x, v;
        cin >> x >> v;

        if(x == 0) {
            insartAtHead(head, v);
        }
        else if(x == 1) {
            insartAtTail(head, v);
        }
        else {
            deleteFromAnyPosition(head, v);
        }

        printList(head);
    }
    return 0;
}