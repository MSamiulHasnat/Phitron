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

void insartAtHead(Node *&head, int value){
    Node *newNode = new Node(value);

    newNode->next = head;
    head = newNode;

    cout << "Value insarted successfully" << nl;
    cout << "______________________________" << nl;
}

void insartAtTail(Node *&head, int value){
    Node *newNode = new Node(value);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node *temp = head;
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

        if(temp == NULL) {
            cout << "Invalid position" << nl;
            return;
        }
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

void deleteFromAnyPosition(Node *head, int position){
    Node *temp = head;

    for(int i = 1; i < position - 1; i++){
        temp = temp->next;

        if(temp == NULL){
            cout << "Invalid position" << nl;
            return;
        }
    }

    if(temp == NULL){
        cout << "Invalid position" << nl;
        return;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;

    cout << "Deleted successfully" << nl;
}

void deleteFromHead(Node *&head){
    if(head == NULL){
        cout << "Head is not available" << nl;
        return;
    }

    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

int main(){
    Node *head = NULL;

    while(true) { 
        cout << "Select an option from bellow" << nl << nl;
        cout << "Option 0 - Insart at Head" << nl;  //done
        cout << "Option 1 - Insart at tail" << nl;  //done
        cout << "Option 2 - Insart at any position" << nl;  //done
        cout << "Option 3 - Print the list" << nl;  //done
        cout << "Option 4 - Delete from any position" << nl;    //done
        cout << "Option 5 - Delete from head" << nl;    //done
        cout << "Option 6 - Terminate" << nl;   

        int Option;
        cin >> Option;

        if(Option == 0){
            cout << "Enter a value to insart at head: ";
            int value;
            cin >> value;

            insartAtHead(head, value);
        }
        else if(Option == 1){
            cout << "Enter a value to insart at tail: "; 
            int value;
            cin >> value;
            insartAtTail(head, value);
        }
        else if(Option == 2){
            cout << "Enter Position to insart: ";
            int position;
            cin >> position;

            cout << "Enter a value to insart at position" << position << ": ";
            int value;
            cin >> value;

            if(position == 0) insartAtHead(head, value);
            else insartAtAnyPosition(head, position, value);
        }
        else if(Option == 3){
            printList(head);
        }
        else if(Option == 4){
            int position;
            cout << "Enter position to delete :";
            cin >> position;

            deleteFromAnyPosition(head, position);
        }
        else if(Option == 5){
            deleteFromHead(head);
        }
        else if(Option == 6){
            cout << "Terminating the programe. See you next time" << nl << nl;
            break;
        }
        else cout << "Invalid option, try again" << nl;

        cout << nl << nl;
    }

    return 0;
}