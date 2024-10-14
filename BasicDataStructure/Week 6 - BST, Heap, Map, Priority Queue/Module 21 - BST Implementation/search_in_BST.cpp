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

void levelOrder(Node *root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node *f = q.front();
        q.pop();

        cout << f->value << " ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}

bool search(Node *root, int x){
    if(root == NULL) return false;
    if(root->value == x) return true;

    if(x < root->value) return search(root->left, x);
    else return search(root->right, x);
}

int main(){
{  //this 4 lines are for input and output .text files
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
}

    Node *root = inputTree();

    if(search(root, 7)) cout << "YES" << nl;
    else cout << "NO" << nl;

    return 0;
}