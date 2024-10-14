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

void insartAtTail(Node *&head, Node *&tail, int value){
    Node *newNode = new Node(value);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void printNormal(Node *head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << nl;
}

int size(Node *head){
    Node *temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void checkPalindrom(Node *head, Node *tail){
    Node *tempHead = head;
    Node *tempTail = tail;

    bool flag = false;
    while(tempHead != tempTail && tempHead->next != tempTail){
        if(tempHead->value != tempTail->value){
            flag = true;
        }
        tempHead = tempHead->next;
        tempTail = tempTail->prev;
    }

    if(flag) cout << "NO" << nl;
    else cout << "YES" << nl;
}

int main(){
{  //this 4 lines are for input and output .text files
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
}
    
    Node *head = NULL;
    Node *tail = NULL;

    while(true){
        int value;
        cin >> value;

        if(value == -1) break;

        insartAtTail(head, tail, value);
    }

    checkPalindrom(head, tail);

    return 0;
}