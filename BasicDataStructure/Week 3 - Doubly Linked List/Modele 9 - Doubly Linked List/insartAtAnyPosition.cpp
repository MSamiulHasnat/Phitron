#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

class Node{
    public:
    int value;
    Node *next;
    Node *prev;

    Node(int value){
        this->value = value;
        next = NULL;
        prev = NULL;
    }
};

int size(Node *head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}

void insertAtHead(Node *&head, Node *&tail, int value){
    Node *newNode = new Node(value);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;

    cout << "inserted at head successfully" << nl;
}

void insertAtAnyPosition(Node *&head, Node *&tail, int position, int value){
    Node *newNode = new Node(value);
    Node *temp = head;

    if(position == 0){
        if(head == NULL){
            head = newNode;
            tail = newNode;

            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        
        cout << "inserted at position " << position << " successfully" << nl;
        return;
    }

    // if(position == 0) insertAtHead(head, tail, value);

    for(int i = 0; i < position - 1; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;

    Node *temp2 = head;
    while(temp != NULL){
        temp = temp->next;
    }
    tail = temp2;

    cout << "inserted at position " << position << " successfully" << nl;
}

void insertAtTail(Node *&tail, int value){
    Node *newNode = new Node(value);

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void printNormal(Node *head){
    while(head != NULL){
        cout << head->value << " ";
        head = head->next;
    }
    cout << nl;
    cout << "Normally printed successfully" << nl;
}

void printReverse(Node *tail){
    while(tail != NULL){
        cout << tail->value << " ";
        tail = tail->prev;
    }
    cout << nl;
    cout << "Reversely printed successfully" << nl;
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;

    while(true){
        cout << nl << "select an option from below" << nl;

        cout << "Option 0 - insert at head" << nl;
        cout << "Option 1 - insert at any position" << nl;
        cout << "Option 2 - insert at tail" << nl;
        cout << "Option 3 - Print normal" << nl;
        cout << "Option 4 - Print reverse" << nl;
        cout << "Option 5 - Delete from head" << nl;
        cout << "Option 6 - Delete from any position" << nl;
        cout << "Option 7 - Delete from tail" << nl << nl;

        int option, value;
        cin >> option;

        if(option == 0){
            cout << "Enter a value to add at the head : ";
            cin >> value;
            insertAtHead(head, tail, value);
        }
        else if(option == 1){
            cout << "Enter a position to add value : ";
            int position;
            cin >> position;

            cout << "Now enter the value : ";
            cin >> value;

            insertAtAnyPosition(head, tail, position, value);
        }
        else if(option == 2){
            cout << "Enter a value to add at the tail : ";
            cin >> value;

            insertAtTail(tail, value);
        }
        else if(option == 3){
            printNormal(head);
        }
        else if(option == 4){
            printReverse(tail);
        }
        else if(option == 5){

        }
        else if(option == 6){

        }
        else if(option == 7){

        }
        else if(option == 8){
            cout << "Terminating the programe, see you next time" << nl;
            break;
        }
        else cout << "Invalid option, try again" << nl;

        cout << "tail" << &tail;
    }
    return 0;
}