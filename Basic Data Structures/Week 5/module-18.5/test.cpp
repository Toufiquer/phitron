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


int max_hieght(Node * root){
    if(root == NULL)
        return 0;

    if(root->left == NULL && root->right == NULL)
        return 0;

    int l = max_hieght(root->left);
    int r = max_hieght(root->right);

    return max(l, r) + 1;
}
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

   int height = max_hieght(root);
   cout << height << endl;
   cout << " v 1.0.0.1";
   return 0;
}