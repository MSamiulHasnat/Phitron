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
    cout << "Value insarted succesfully" << nl;
    cout << "______________________________" << nl;
}

void printList(Node *head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << "List printed succesfully" << nl;
    cout << "______________________________" << nl;
}

int main(){
    Node *head = new Node(NULL);

    while(true) { 
        cout << "Select an option from bellow" << nl << nl;
        cout << "Option 1 - Insart at tail" << nl;
        cout << "Option 2 - Print the list" << nl;
        cout << "Option 3 - Terminate" << nl;

        int Option;
        cin >> Option;

        if(Option == 1){
            cout << "Enter a value to insart: "; 
            int value;
            cin >> value;
            insartAtTail(head, value);
        }
        else if(Option == 2){
            printList(head);
        }
        else if(Option == 3){
            cout << "Terminating the programe. See you next time" << nl;
            break;
        }
        else cout << "Invalid option, try again" << nl;

        cout << nl << nl;
    }

    return 0;
}