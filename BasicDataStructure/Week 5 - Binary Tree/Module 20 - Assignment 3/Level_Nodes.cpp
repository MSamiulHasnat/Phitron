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

    queue<pair<Node*, int>> q;
    if(root) q.push({root, 0});

    while(!q.empty()){
        pair<Node*, int> parent = q.front();
        Node * tempNode = parent.first;
        int level = parent.second;
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

        if(tempNode->left) q.push({tempNode->left, level+1});
        if(tempNode->right) q.push({tempNode->right, level+1});
    }
    return root;
}

void abc(Node *root, int a){

    queue<pair<Node*, int>> q;
    q.push({root, 0});

    bool flag = false;
    while(!q.empty()){
        pair<Node*, int> parent = q.front();
        Node * tempNode = parent.first;
        int level = parent.second;
        q.pop();

        if(level == a) {
            cout << tempNode->value << " ";
            flag = true;
        }

        if(tempNode->left) q.push({tempNode->left, level+1});
        if(tempNode->right) q.push({tempNode->right, level+1});

    }
    if(flag == false) cout << "Invalid" << nl;
}

int maxHeight(Node *root){
    if (root == NULL) return 0;

    int l = maxHeight(root->left);
    int r = maxHeight(root->right);

    return max(l, r) + 1;
}

int main(){
    Node *root = inputTree();
    
    int level;
    cin >> level;

    abc(root, level);
    
    return 0;
}