#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

class Node {
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val) {
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};

class myStack {
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val) {
        sz++;

        Node *newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop() {
        sz--;

        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
            head = NULL;
        else
            tail->next = NULL;

        delete deleteNode;
    }

    int top() {
        return tail->val;
    }

    int size() {
        return sz;
    }

    bool empty() {
        return sz == 0;
    }
};

int main() {
    myStack st;

    int n;
    cin >> n;

    while (n--) {
        int val;
        cin >> val;

        st.push(val);
    }

    myStack st2;

    int m;
    cin >> m;

    while (m--) {
        int val;
        cin >> val;

        st2.push(val);
    }

    int x, y;
    if (st.size() != st2.size()) {
        cout << "NO" << nl;
    } else {
        bool flag = true;
        while (!st.empty()) {
            x = st.top();
            y = st2.top();

            if (x != y) {
                flag = false;
                break;
            }

            st.pop();
            st2.pop();
        }
        if (flag) {
            cout << "YES" << nl;
        } else {
            cout << "NO" << nl;
        }
    }
}