/*
#include <iostream>
using namespace std;

// Definition of a binary tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Function to print leaf nodes
void printLeafNodes(Node* root) {
    if (root == nullptr)
        return;

    // If this is a leaf node, print it
    if (root->left == nullptr && root->right == nullptr) {
        cout << root->data << " ";
        return;
    }

    // Otherwise, recur for left and right subtrees
    printLeafNodes(root->left);
    printLeafNodes(root->right);
}

int main() {

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->right = new Node(7);
    root->right->right = new Node(6);

    cout << "Leaf nodes of the binary tree are: ";
    printLeafNodes(root);
    cout << endl;

    return 0;
}

*/