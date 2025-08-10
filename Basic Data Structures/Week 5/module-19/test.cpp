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

void printLavel(Node *node) {
    if(node == NULL) return;
    queue<Node> q;
    q.push(*node);

    while(!q.empty()){
        cout << q.front().val << " ";
       if(q.front().left){ q.push(*q.front().left);}
       if(q.front().right){ q.push(*q.front().right);}
        q.pop();
    }
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

bool findAndPrint(Node* root, int x){
       if(root == NULL)
        return false;

    if(root->val == x)
        return true;
   bool l= findAndPrint(root->left,x);
   bool r= findAndPrint(root->right,x);

   return l || r;
}

int main(){
   // !

   Node *root = inputTree();

//    printLavel(root);

   int x;
   cin >> x;
//    cout << " : : " << x;

   bool result = findAndPrint(root, x);

   cout << endl<< result << endl<< " "<< " v 1.0.0.6";
   return 0;
}