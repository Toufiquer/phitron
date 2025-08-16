#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <climits>

using namespace std;

// Node structure for the Binary Search Tree
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Binary Search Tree class
class BST {
public:
    Node *root;

    BST() {
        root = nullptr;
    }

    // Function to insert a new node
    Node* insert(Node* node, int data) {
        if (node == nullptr) {
            return new Node(data);
        }
        if (data < node->data) {
            node->left = insert(node->left, data);
        } else {
            node->right = insert(node->right, data);
        }
        return node;
    }

    // 1. Build Tree from given Preorder Sequence
    Node* buildTreeFromPreorder(vector<int>& preorder, int& preIndex, int min, int max) {
        if (preIndex >= preorder.size()) {
            return nullptr;
        }
        Node* root = nullptr;
        if (preorder[preIndex] > min && preorder[preIndex] < max) {
            root = new Node(preorder[preIndex++]);
            root->left = buildTreeFromPreorder(preorder, preIndex, min, root->data);
            root->right = buildTreeFromPreorder(preorder, preIndex, root->data, max);
        }
        return root;
    }

    // 2. Tree Traversals
    // a. Preorder Traversal
    void preorderTraversal(Node* node) {
        if (node == nullptr) return;
        cout << node->data << " ";
        preorderTraversal(node->left);
        preorderTraversal(node->right);
    }

    // b. Inorder Traversal
    void inorderTraversal(Node* node) {
        if (node == nullptr) return;
        inorderTraversal(node->left);
        cout << node->data << " ";
        inorderTraversal(node->right);
    }

    // c. Postorder Traversal
    void postorderTraversal(Node* node) {
        if (node == nullptr) return;
        postorderTraversal(node->left);
        postorderTraversal(node->right);
        cout << node->data << " ";
    }

    // 3. Level Order Traversal
    void levelOrderTraversal(Node* root) {
        if (root == nullptr) return;
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            Node* current = q.front();
            q.pop();
            cout << current->data << " ";
            if (current->left != nullptr) {
                q.push(current->left);
            }
            if (current->right != nullptr) {
                q.push(current->right);
            }
        }
    }

    // 4. Height of Tree
    int height(Node* node) {
        if (node == nullptr) {
            return -1;
        }
        int leftHeight = height(node->left);
        int rightHeight = height(node->right);
        return max(leftHeight, rightHeight) + 1;
    }

    // 5. Count of Nodes of Tree
    int countNodes(Node* node) {
        if (node == nullptr) {
            return 0;
        }
        return 1 + countNodes(node->left) + countNodes(node->right);
    }

    // 6. Sum of Nodes of Tree
    int sumOfNodes(Node* node) {
        if (node == nullptr) {
            return 0;
        }
        return node->data + sumOfNodes(node->left) + sumOfNodes(node->right);
    }

    // 7. Diameter of Tree - Approach 1: O(N^2)
    int diameterOn2(Node* root) {
        if (root == nullptr) {
            return 0;
        }
        int lHeight = height(root->left);
        int rHeight = height(root->right);

        int lDiameter = diameterOn2(root->left);
        int rDiameter = diameterOn2(root->right);

        return max(lHeight + rHeight + 2, max(lDiameter, rDiameter));
    }

    // 8. Diameter of Tree - Approach 2: O(N)
    pair<int, int> diameterOn(Node* root) {
        if (root == nullptr) {
            return make_pair(0, 0);
        }
        pair<int, int> left = diameterOn(root->left);
        pair<int, int> right = diameterOn(root->right);

        int height = max(left.first, right.first) + 1;
        int diameter = max({left.second, right.second, left.first + right.first});

        return make_pair(height, diameter);
    }

    // 9. Subtree of another tree
    bool isIdentical(Node* root1, Node* root2) {
        if (root1 == nullptr && root2 == nullptr) {
            return true;
        }
        if (root1 == nullptr || root2 == nullptr) {
            return false;
        }
        return (root1->data == root2->data &&
                isIdentical(root1->left, root2->left) &&
                isIdentical(root1->right, root2->right));
    }

    bool isSubtree(Node* T, Node* S) {
        if (S == nullptr) {
            return true;
        }
        if (T == nullptr) {
            return false;
        }
        if (isIdentical(T, S)) {
            return true;
        }
        return isSubtree(T->left, S) || isSubtree(T->right, S);
    }
};

int main() {
    BST bst;

    // Build Tree from given Preorder Sequence
    vector<int> preorder = {8, 3, 1, 6, 4, 7, 10, 14, 13};
    int preIndex = 0;
    bst.root = bst.buildTreeFromPreorder(preorder, preIndex, INT_MIN, INT_MAX);

    cout << "1. Tree Traversals:" << endl;
    cout << "   a. Preorder: ";
    bst.preorderTraversal(bst.root);
    cout << endl;

    cout << "   b. Inorder: ";
    bst.inorderTraversal(bst.root);
    cout << endl;

    cout << "   c. Postorder: ";
    bst.postorderTraversal(bst.root);
    cout << endl;

    cout << "2. Level Order: ";
    bst.levelOrderTraversal(bst.root);
    cout << endl;

    cout << "3. Height of Tree: " << bst.height(bst.root) << endl;

    cout << "4. Count of Nodes of Tree: " << bst.countNodes(bst.root) << endl;

    cout << "5. Sum of Nodes of Tree: " << bst.sumOfNodes(bst.root) << endl;

    cout << "6. Diameter of Tree - Approach1 O(N^2): " << bst.diameterOn2(bst.root) << endl;

    cout << "7. Diameter of Tree - Approach2 O(N): " << bst.diameterOn(bst.root).second << endl;

    // Create another tree to check for subtree
    BST subtreeBst;
    subtreeBst.root = subtreeBst.insert(subtreeBst.root, 10);
    subtreeBst.insert(subtreeBst.root, 14);
    subtreeBst.insert(subtreeBst.root, 13);

    cout << "8. Subtree of another tree: " << (bst.isSubtree(bst.root, subtreeBst.root) ? "Yes" : "No") << endl;

    return 0;
}