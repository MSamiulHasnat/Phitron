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
    int val;
    cin >> val;

    Node *root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty()){
        Node *parent = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *leftVal, *rightVal;
        if(l == -1) leftVal = NULL;
        else leftVal = new Node(l);

        if(r == -1) rightVal = NULL;
        else rightVal = new Node(r);

        parent->left = leftVal;
        parent->right = rightVal;

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
    return root;
}

int countNode(Node *root){
    if(root == NULL) return 0;

    int l = countNode(root->left);
    int r = countNode(root->right);

    return l + r + 1;
}

int main(){
{  //this 4 lines are for input and output .text files
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
}
    Node *root = inputTree();
    cout << countNode(root);
    return 0;
}