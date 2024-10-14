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

void preorder(Node *root){
    if(root == NULL) return;

    cout << root->value << " ";

    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root){
    if(root == NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->value << " ";
}

void inorder(Node *root){
    if(root == NULL) return;

    inorder(root->left);
    cout << root->value << " ";
    inorder(root->right);
}

int main(){
    Node *root = new Node(10);
    Node *a = new Node(10);
    Node *b = new Node(10);
    Node *c = new Node(10);
    Node *d = new Node(10);
    Node *e = new Node(10);
    Node *f = new Node(10);
    Node *g = new Node(10);
    Node *h = new Node(10);
    Node *i = new Node(10);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    c->right = e;
    h->right = i;
    b->right = d;
    d->left = f;
    d->right = g;

    return 0;
}