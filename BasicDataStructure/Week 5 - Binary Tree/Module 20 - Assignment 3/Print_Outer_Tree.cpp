#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

class Node{
public:
    int value;
    Node *left;
    Node *right;

    Node(int value){
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *inputTree(){
    Node *root;

    int value;
    cin >> value;
    if(value == -1) root = NULL;
    else root = new Node(value);

    queue<Node *> q;
    if(root) q.push(root);
    
    while(!q.empty()){
        Node *tempNode = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *leftNode, *rightNode;
        if(l == -1) leftNode = NULL;
        else leftNode = new Node(l);

        if(r == -1) rightNode = NULL;
        else rightNode = new Node(r);

        tempNode->left = leftNode;
        tempNode->right = rightNode;

        if(tempNode->left) q.push(tempNode->left);
        if(tempNode->right) q.push(tempNode->right);
    }
    return root;
}

void leftOuterTree(Node *root){
    // if(root == NULL) return;

    if(root->left) {
        leftOuterTree(root->left);
        cout << root->left->value << " ";
    }
    else if(root->right) {
        leftOuterTree(root->right);
        cout << root->right->value << " ";
    }
}

void rightOuterTree(Node *root){
    // if(root == NULL) return;

    if(root->right) {
        cout << root->right->value << " ";
        rightOuterTree(root->right);
    }
    else if(root->left) {
        cout << root->left->value << " ";
        rightOuterTree(root->left);
    }
}

int main(){
    Node *root = inputTree();

    if(root->left) leftOuterTree(root);
    cout << root->value << " ";
    if(root->right) rightOuterTree(root);

    return 0;
}