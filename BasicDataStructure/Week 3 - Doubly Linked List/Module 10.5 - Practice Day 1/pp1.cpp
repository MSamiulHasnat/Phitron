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

void checkEqual(Node *head, Node *head2){
    Node *temp = head;
    Node *temp2 = head2;

    bool flag = true;
    while(temp->next != NULL){
        if(temp->value != temp2->value){
            flag = false;
            break;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }

    if(flag == true) cout << "YES" << nl;
    else cout << "NO" << nl;
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

    if(size(head) != size(head2)) cout << "NO" << nl;
    else {
        checkEqual(head, head2);
    }
    
    return 0;
}