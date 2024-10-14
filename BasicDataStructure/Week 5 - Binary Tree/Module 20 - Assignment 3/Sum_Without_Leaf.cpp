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

Node* inputTree(){
    int val;
    cin >> val;

    Node *root;
    if(val == -1) root = NULL;
    else root = new Node(val);

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

        if(leftNode) q.push(leftNode);
        if(rightNode) q.push(rightNode);
    }
    return root;
}

int sumWithoutLeaf(Node *root){
    if(root == NULL) return 0;

    queue<Node *> q;
    q.push(root);

    int sum = 0;
    while(!q.empty()){
        Node *tempNode = q.front();
        q.pop();

        if(tempNode->left != NULL || tempNode->right != NULL) sum += tempNode->value;

        if(tempNode->left) q.push(tempNode->left);
        if(tempNode->right) q.push(tempNode->right);
    }
    return sum;
}

int main(){
    Node *root = inputTree();
    
    int sum = sumWithoutLeaf(root);
    cout << sum << nl;
    
    return 0;
}