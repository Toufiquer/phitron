#include <bits/stdc++.h>
using namespace std;
class Node{
public :
    int val;
    Node *left;
    Node *right;
    Node(int val){
      this->val = val;
      this->left = NULL;
      this->right = NULL;
 };
};
void printTree(Node * root){
    if(root == NULL)
        cout << "Node is empty";

    cout << root->val << " ";

    if(root->left)
        printTree(root->left);
    if(root->right)
        printTree(root -> right);
}



int main() {
   // !
   int x;
   vector<int> vec;
   int counter = 1;
   while (cin >> x)
   {
       vec.push_back(x);
    }
    Node *root = new Node(vec.front());
    queue<Node> qNode;
    qNode.push(*root);
    while (!qNode.empty())

    {
        Node currNode = qNode.front();
        qNode.pop();
        if(!currNode.left){
            Node *newN = new Node(vec[counter]);
            counter++;
        }else{
            qNode.push(*currNode.left);
        }
        if(!currNode.right){
            Node *newN = new Node(vec[counter]);
            counter++;
        }else{
            qNode.push(*currNode.right);
        }

    }
       printTree(root);
   cout << endl<< " v 1.0.0.1";

    return 0;
}