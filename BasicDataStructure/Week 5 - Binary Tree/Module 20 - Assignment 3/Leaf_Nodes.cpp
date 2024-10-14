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

void leafList(Node *root, vector<int> &v){
    if(root == NULL) return;

    if(root->left == NULL && root->right == NULL){
        v.push_back(root->value);
        // return;
    }

    leafList(root->left, v);
    leafList(root->right, v);
}

int main(){
    Node *root = inputTree();

    vector<int> v;
    leafList(root, v);
    sort(v.begin(), v.end(), greater<int>());

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << nl;
    return 0;
}