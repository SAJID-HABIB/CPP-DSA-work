#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Create new node
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// Insert into BST
Node* insert(Node* root, int value) {
    // Case 1: empty tree
    if (root == nullptr) {
        return createNode(value);
    }

    // Case 2: go left
    if (value < root->data) {
        root->left = insert(root->left, value);
    }
    // Case 3: go right
    else {
        root->right = insert(root->right, value);
    }

    return root;
}

// Inorder traversal (shows sorted order)
void inorder(Node* root) {
    if (root == nullptr) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;

    int arr[] = {8, 3, 10, 1, 6, 14, 4};
    int n = 7;

    for (int i = 0; i < n; i++) {
        root = insert(root, arr[i]);
    }

    cout << "BST inorder (sorted output): ";
    inorder(root);

    return 0;
}