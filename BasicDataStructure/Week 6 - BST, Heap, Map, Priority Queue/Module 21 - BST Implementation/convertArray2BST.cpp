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

Node *convert(int array[], int n, int l, int r){
    if(l > r) return NULL;

    int mid = (l + r) / 2;
    Node *root = new Node(array[mid]);

    Node *leftRoot = convert(array, n, l, mid-1);
    Node *rightRoot = convert(array, n, mid+1, r);

    root->left = leftRoot;
    root->right = rightRoot;

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

int main(){
{  //this 4 lines are for input and output .text files
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
}

    int n;
    cin >> n;

    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    Node *root = convert(array, n, 0, n-1);

    levelOrder(root);

    return 0;
} 