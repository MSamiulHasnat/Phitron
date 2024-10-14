#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

class Node{
    public:
        long long value;
        Node *next;

        Node(long long value){
            this->value = value;
            this->next = NULL;
        }
};

void insartAtTail(Node *&head, Node *&tail, long long value){
    Node *newNode = new Node(value);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void printList(Node *head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp->value << " ";
        temp = temp->next;
    }
}

void getDifference(Node *head){
    Node *max = head;
    Node *min = head;

    for(Node *i = head; i != NULL; i = i->next){
        if(max->value < i->value) max = i;
        if(min->value > i->value) min = i;
    }


    cout << max->value - min->value << nl;
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;

    while(true){
        long long value;
        cin >> value;

        if(value == -1) break;
        
        insartAtTail(head, tail, value);
    }
    // cout << tail->value << nl;
    getDifference(head);

    return 0;
}