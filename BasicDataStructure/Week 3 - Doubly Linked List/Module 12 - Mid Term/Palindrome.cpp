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

void insart_tail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void checkPalindrom(Node *head, Node *tail){
    Node *tempHead = head;
    Node *tempTail = tail;

    while(tempHead != tempTail && tempHead->next != tempTail){
        if(tempHead->val != tempTail->val) {
            cout << "NO" << nl;
            return;
        }
        tempHead = tempHead->next;
        tempTail = tempTail->prev;
    }
    if(tempHead->val == tempTail->val) cout << "YES" << nl;
    else cout << "NO" << nl;
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;

    while(true){
        int val;
        cin >> val;
        if(val == -1) break;

        insart_tail(head, tail, val);
    }
    checkPalindrom(head, tail);
    
    return 0;
}