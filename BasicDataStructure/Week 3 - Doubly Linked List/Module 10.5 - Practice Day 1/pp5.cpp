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

// void insartAtTail(Node *&head, Node *&tail, int value){
//     Node *newNode = new Node(value);

//     if(head == NULL){
//         head = newNode;
//         tail = newNode;
//         return;
//     }

//     tail->next = newNode;
//     newNode->prev = tail;
//     tail = newNode;
// }



int main(){

    // Node *head = NULL;
    // Node *tail = NULL;

    list<int> myList;

    while(true){
        int value;
        cin >> value;

        if(value == -1) break;

        myList.push_back(value);

    }

    myList.sort();
    for(int value: myList){
        cout << value << " ";
    }
    
    return 0;
}