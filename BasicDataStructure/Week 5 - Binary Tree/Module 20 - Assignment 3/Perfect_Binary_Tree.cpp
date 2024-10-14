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

    queue<Node*> q;
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

int maxHeight(Node *root){
    if (root == NULL) return 0;

    int l = maxHeight(root->left);
    int r = maxHeight(root->right);

    return max(l, r) + 1;
}

int nodeCount(Node *root) {
    if (root == NULL) return 0;

    int l = nodeCount(root->left);
    int r = nodeCount(root->right);

    return l + r + 1;
}

int main(){
    Node *root = inputTree();

    int height = maxHeight(root);
    int totalNode = pow(2, height) - 1;
    

    if(totalNode == nodeCount(root)) cout << "YES" << nl;
    else cout << "NO" << nl;
}