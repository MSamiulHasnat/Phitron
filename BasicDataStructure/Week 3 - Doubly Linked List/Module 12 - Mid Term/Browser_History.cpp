#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

class Node{
    public:
    string str;
    Node *prev;
    Node *next;

    Node(string str){
        this->str = str;
        prev = NULL;
        next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, string str){
    Node *newNode = new Node(str);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void search(Node *head, Node *&pnt, string add){
    Node *temp = head;

    while(temp != NULL){
        if(temp->str == add){
            pnt = temp;
            cout << add << nl;
            return;
        }
        temp = temp->next;
    }
    cout << "Not Available" << nl;
    // pnt = NULL;
}

void printList(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->str << " ";
        temp = temp->next;
    }
    cout << nl;
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;

    while(true){
        string str;
        cin >> str;
        if(str == "end") break;

        insert_tail(head, tail, str);
    }

    int q;
    cin >> q;

    Node *pnt = NULL;

    while(q--){
        string commands;
        cin >> commands;

        if(commands == "visit"){
            string add;
            cin >> add;
            search(head, pnt, add);
        }
        else if(commands == "next"){
            if(pnt == NULL || pnt->next == NULL){
                cout << "Not Available" << nl;
            }
            else {
                pnt = pnt->next;
                cout << pnt->str << nl;
            }
        }
        else if(commands == "prev"){
            if(pnt == NULL || pnt->prev == NULL){
                cout << "Not Available" << nl;
            }
            else{
                pnt = pnt->prev; 
                cout << pnt->str << nl;
            }
        }
    }
    return 0;
}