#include <iostream>
#include <stack>
using namespace std;

struct Node {
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

void inorder(Node* root) {
    stack<Node*> s;

    while (root != NULL || !s.empty()) {
        while (root != NULL) {
            s.push(root);
            root = root->left;
        }

        root = s.top();
        s.pop();

        cout << root->data << " ";

        root = root->right;
    }
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->left->right = new Node(7);

    cout << "Inorder Traversal: ";
    inorder(root);

    return 0;
}



void preorder(Node* root) {
    if (root == NULL) return;

    stack<Node*> s;
    s.push(root);

    while (!s.empty()) {
        Node* cur = s.top();
        s.pop();

        cout << cur->data << " ";

        if (cur->right) s.push(cur->right);
        if (cur->left)  s.push(cur->left);
    }
}


void postorder(Node* root) {
    if (root == NULL) return;

    stack<Node*> s1, s2;
    s1.push(root);

    while (!s1.empty()) {
        Node* cur = s1.top();
        s1.pop();

        s2.push(cur);

        if (cur->left)  s1.push(cur->left);
        if (cur->right) s1.push(cur->right);
    }

    while (!s2.empty()) {
        cout << s2.top()->data << " ";
        s2.pop();
    }
}