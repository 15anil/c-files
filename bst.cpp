#include <iostream>

// Node structure for the binary search tree
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Binary Search Tree class
class BST {
private:
    TreeNode* root;

public:
    BST() : root(nullptr) {}

    // Function to insert a node into the binary search tree
    void insert(int val) {
        root = insertRecursive(root, val);
    }

    // Function to perform recursive insertion
    TreeNode* insertRecursive(TreeNode* node, int val) {
        if (node == nullptr) {
            return new TreeNode(val);
        }

        if (val < node->data) {
            node->left = insertRecursive(node->left, val);
        } else {
            node->right = insertRecursive(node->right, val);
        }

        return node;
    }

    // Function to perform in-order traversal
    void inOrderTraversal() {
        inOrderTraversalRecursive(root);
        std::cout << std::endl;
    }

    // Function for recursive in-order traversal
    void inOrderTraversalRecursive(TreeNode* node) {
        if (node != nullptr) {
            inOrderTraversalRecursive(node->left);
            std::cout << node->data << " ";
            inOrderTraversalRecursive(node->right);
        }
    }
};

int main() {
    BST bst;

    // Insert keys into the binary search tree using a regular for loop
    int keys[] = {5, 3, 8, 2, 4, 7, 9};
    int size = sizeof(keys) / sizeof(keys[0]);

    for (int i = 0; i < size; ++i) {
        bst.insert(keys[i]);
    }

    // Perform in-order traversal of the binary search tree
    std::cout << "In-order traversal of BST: ";
    bst.inOrderTraversal();

    return 0;
}
