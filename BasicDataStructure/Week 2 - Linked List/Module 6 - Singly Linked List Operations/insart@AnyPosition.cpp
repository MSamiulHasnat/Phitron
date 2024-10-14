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
    Node *temp = head;

    if(head == NULL){
        head = newNode;
        return;
    }

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;

    cout << "Value insarted successfully" << nl;
    cout << "______________________________" << nl;
}

void insartAtAnyPosition(Node *head, int position, int value){
    Node *newNode = new Node(value);
    Node *temp = head;

    for(int i = 1; i < position - 1; i++){
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    cout << "Insarted at position " << position << " successfully" << nl;
    cout << "______________________________" << nl;
}

void printList(Node *head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << nl << "List printed succesfully" << nl;
    cout << "______________________________" << nl;
}

int main(){
    Node *head = NULL;

    while(true) { 
        cout << "Select an option from bellow" << nl << nl;
        cout << "Option 1 - Insart at tail" << nl;
        cout << "Option 2 - Insart at any position" << nl;
        cout << "Option 3 - Print the list" << nl;
        cout << "Option 4 - Terminate" << nl;

        int Option;
        cin >> Option;

        if(Option == 1){
            cout << "Enter a value to insart: "; 
            int value;
            cin >> value;
            insartAtTail(head, value);
        }
        else if(Option == 2){
            cout << "Enter Position to insart: ";
            int position;
            cin >> position;

            cout << "Enger a value to insart: ";
            int value;
            cin >> value;

            insartAtAnyPosition(head, position, value);
        }
        else if(Option == 3){
            printList(head);
        }
        else if(Option == 4){
            cout << "Terminating the programe. See you next time" << nl;
            break;
        }
        else cout << "Invalid option, try again" << nl;

        cout << nl << nl;
    }

    return 0;
}