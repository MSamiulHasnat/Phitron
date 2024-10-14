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

    if(head == NULL){
        head = newNode;
        return;
    }

    Node *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteDuplicate(Node *head){
    Node *temp = head;
    for(Node *i = temp; i != NULL; i = i->next){
        for(Node *j = i; j->next != NULL;){
            if(i->value == j->next->value){
                Node *tmp = j->next;
                j->next = j->next->next;
                delete tmp;
            }
            else {
                j = j->next;
            }
        }
    }
}

void printList(Node *head){
    while(head != NULL){
        cout << head->value << " ";
        head = head->next;
    }
    cout << nl;
}

int main(){
    Node *head = NULL;

    while(true){
        int value;
        cin >> value;

        if(value == -1) break;

        insartAtTail(head, value);
    }
    deleteDuplicate(head);
    printList(head);

    return 0;
}