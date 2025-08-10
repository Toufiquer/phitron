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

Node * convert(int a[], int n, int l,  int r){
    if(l>r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    Node * lNode = convert(a,n,l,mid-1);
    Node * rNode = convert(a,n,mid+1,r);
    root->left = lNode;
    root->right = rNode;
}

int main(){
   // !
   int n;
   cin >> n;
   int a[n];
   for (int i = 0; i < n;i++){
       cin >> a[i];
   }
   Node *root = convert(a, n, 0, n-1);
//    for (int i = 0; i < n;i++){
//        cout << a[i] << " ";
//    }
   printTree(root);
   cout << endl<< " v 1.0.0.1";
   return 0;
}