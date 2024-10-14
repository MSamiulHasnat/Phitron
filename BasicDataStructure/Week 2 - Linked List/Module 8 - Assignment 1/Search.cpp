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

void printList(Node *head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp->value << " ";
        temp = temp->next;
    }
}

void search(Node *head, int x){
    int position = 0;
    bool flag = false;

    Node *temp = head;
    while(temp != NULL){
        if(x == temp->value){
            flag = true;
            break;
        }

        position++;

        temp = temp->next;
    }

    if(flag) cout << position << nl;
    else cout << -1 << nl;
}

int main(){
    int tc;
    cin >> tc;

    while(tc--){
        Node *head = NULL;
        Node *tail = NULL;

        while(true){
            int value;
            cin >> value;

            if(value == -1) break;

            insartAtTail(head, tail, value);
        }

        int x;
        cin >> x;

        search(head, x);
    }
    return 0;
}