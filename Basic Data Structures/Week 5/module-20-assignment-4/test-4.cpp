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


void printLavelWithLavel(Node *node,int printL) {
  int l = 0;
  if (node == NULL)
    return;
  queue<pair<Node*,int>> q;
  q.push({node,l});
  int isPrint = 0; // false
  while (!q.empty())
  {
    Node *p = q.front().first;
    int l = q.front().second;
    if(printL == l){
      cout << p->val << " ";
      isPrint = 1;
    }
    // cout << "val:lavel = " << p->val << " : " << l << endl;
    if (p->left)
    {
      q.push({p->left,l+1});
    }
    if (p->right)
    {
      q.push({p->right,l+1});
    }
    q.pop();
  }
  if(isPrint == 0){
    cout << "Invalid";
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

  int print_level;
  cin >> print_level;
  if(print_level ==0){
    cout << root->val;
    return 0;
  }
  printLavelWithLavel(root,print_level);
   return 0;
}