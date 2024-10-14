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
void insartAtTail(Node *&head, Node *&tail, int value){
    Node *newNode = new Node(value);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = tail->next;
}

int size(Node *head){
    int count = 0;

    while(head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

void checkSame(Node *head, Node *head2){
    Node *temp = head;
    Node *temp2 = head2;

    if(size(head) != size(head2)) {
        cout << "NO" << nl;
        return;
    }

    bool flag = true;
    while(temp != NULL && temp2 != NULL){
        if(temp->value != temp2->value) flag = false;

        temp = temp->next;
        temp2 = temp2->next;
    }

    if(flag) cout << "YES" << nl;
    else cout << "NO" << nl;
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
    Node *tail = NULL;
    
    while(true){
        int value;
        cin >> value;

        if(value == -1) break;

        insartAtTail(head, tail, value);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    
    while(true){
        int value;
        cin >> value;

        if(value == -1) break;

        insartAtTail(head2, tail2, value);
    }

    // cout << size(head);

    checkSame(head, head2);
    return 0;
}

// NOT SOLVED YET