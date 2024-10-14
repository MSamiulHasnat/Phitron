#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

class Node{
    public:
    int val;
    Node *prev;
    Node *next;

    Node(int val){
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};

int size(Node *head){
    int count = 0;
    Node *temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
bool insert(Node *&head, Node *&tail, int pos, int val){
    Node *newNode = new Node(val);
    if(pos == 0){
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return true;
        }

        head->prev = newNode;
        newNode->next = head;
        head = newNode;
        return true;
    }
    if(pos == size(head)){
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        return true;
    }
    if(pos < size(head)) {
        Node *temp = head;
        for(int i = 0; i < pos; i++){
            temp = temp->next;
        }
        temp->prev->next = newNode;
        newNode->prev = temp->prev;
        temp->prev = newNode;
        newNode->next = temp;
        return true;
    }
    return false;
}

void printLeft(Node *head){
    Node *temp = head;

    cout << "L -> ";
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << nl;
}

void printRight(Node *tail){
    Node *temp = tail;

    cout << "R -> ";
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << nl;
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while(q--){
        int x, v;
        cin >> x >> v; 
        if(insert(head, tail, x, v)) {
            printLeft(head);
            printRight(tail);
        }
        else cout<<"Invalid"<<'\n';
    }
    return 0;
}