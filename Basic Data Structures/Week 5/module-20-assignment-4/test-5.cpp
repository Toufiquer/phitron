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

void printLaftLavel(Node *node) {
    if (node == NULL)
    return;
    stack<Node *> sN;
    stack<int> pN;
    sN.push(node);
    while(!sN.empty()){
      Node *temp = sN.top();
      pN.push(temp->val);
      sN.pop();
      if(temp->left){
        sN.push(temp->left); 
      }else{
        if(temp->right){
          sN.push(temp->right);
        }
      }
    }
    while(!pN.empty()){
      int nVal = pN.top();
      pN.pop();
      cout << nVal << " ";
    }
};
void printRightLavel(Node *node) {
    if (node == NULL)
    return;
    stack<Node *> sN;
    sN.push(node);
    while(!sN.empty()){
      Node *temp = sN.top();
      cout << temp->val<<  " ";
      sN.pop();
      if(temp->right){
        sN.push(temp->right); 
      } else{
        if(temp->left){
          sN.push(temp->left);
        }
      }
    }
};

int main(){
   // !
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

  printLaftLavel(root->left);
  cout << root->val << " ";
  printRightLavel(root->right); 

  // cout << endl<< "v - 1.1.1";

  return 0;
}