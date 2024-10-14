#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

class Node {
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

void insartAtHead(Node *&head, Node *&tail, int value){
    Node *newNode = new Node(value);
    Node *temp = head;

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

    // if(head == NULL){
    //     head = newNode;
    //     tail = newNode;
    //     return;
    // }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insartAtX(Node *head, int x, int v){
    Node *newNode = new Node(v);
    Node *temp = head;

    for(int i = 0; i < x; i++){
        temp = temp->next;
    }

    newNode->prev = temp->prev;
    newNode->next = temp;
    temp->prev->next = newNode;
    temp->prev = newNode;
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

int main(){
// {  //this 4 lines are for input and output .text files
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif 
// }

    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while(q--){
        int x, v;
        cin >> x >> v;

        if(size(head) < x || x < 0){
            cout << "Invalid" << nl;
            continue;
        }
        else if(x == 0){
            insartAtHead(head, tail, v);
        }
        else if(x == size(head)){
            insartAtTail(head, tail, v);
        }
        else{
            insartAtX(head, x, v);
        }

        printNormal(head);
        printReverse(tail);
    }
    return 0;
}