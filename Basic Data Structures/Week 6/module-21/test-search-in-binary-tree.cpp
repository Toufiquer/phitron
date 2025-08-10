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

Node *inputTree(){
       int val;
   cin >> val;
   if(val == -1) return 0;
   Node *root = new Node(val);
   queue<Node*> q;
   q.push(root);

   while(!q.empty()){
        
       int l, r;
       cin >> l >> r;

       

       Node *p = q.front();
       q.pop();

       if(l!= -1 ){
           Node *lNode = new Node(l);
           p->left = lNode;
           p->left->val = l;
           q.push(p->left);
       }
       if(r!= -1 ){
           Node *rNode = new Node(r);
           p->right = rNode;
           p->right->val = r;
           q.push(p->right);
        }
   }

   return root;
}

bool searchInTree(Node * root,int filterVal){
    if(root == NULL)
        return false;
        if(root->val == filterVal)
            return true;

    if(root->val > filterVal)
        return searchInTree(root->left,filterVal);

    if(root->val < filterVal)
        return searchInTree(root->right,filterVal);
}

int main(){
   // !
   Node *root = inputTree();
   int searchV;
   cin >> searchV;
   if(searchInTree(root, searchV))
       cout << "Found" << endl;
       else
           cout << "Not found" << endl;
   cout << " v 1.0.0.2";
   return 0;
}