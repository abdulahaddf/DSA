#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root, int val) {
    if (root == NULL) {
        return new Node(val);
    }
    if (val < root->data) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}
void inorderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}
int main() {
    Node* root = NULL;
    vector<int> values = {5, 3, 8, 1, 4, 7, 9};
    for (int val : values) {
        root = insert(root, val);
    }
    cout << "Inorder Traversal of the BST: ";
    inorderTraversal(root);
    cout << endl;
    return 0;
}
