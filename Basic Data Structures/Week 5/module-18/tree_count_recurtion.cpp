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

int count_leaf_nodes(Node * root){
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right== NULL)
        return 1;
    int l = count_leaf_nodes(root->left);
    int r = count_leaf_nodes(root->right);
    return r + l;
}
int count_nodes(Node * root){
    if(root == NULL){
        return 0;
    }
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    return r + l + 1;
}

int main(){
   // !
  Node *root = new Node(10);
  root->left = new Node(20);
  root->right = new Node(30);
  root->left->left = new Node(40);
  root->left->right = new Node(50);

  int totalNode  = count_nodes(root);
  int totalLeafNode  = count_leaf_nodes(root);

  cout << "total Node : " << totalNode << endl;
  cout << "total Leaf Node : " << totalLeafNode << endl;

  cout <<endl<< " v 1.0.0.3";
 return 0;
}