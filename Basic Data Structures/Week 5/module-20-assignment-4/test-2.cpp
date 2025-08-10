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



int main(){
   // !
   int val;
   cin >> val;
   if(val == -1) return 0;
   Node *root = new Node(val);
   queue<pair<Node*,int>> q;
   if(root)
   q.push({root,1});

   while(!q.empty()){
        
       int l, r;
       cin >> l >> r;

       Node *p = q.front().first;
       int level = q.front().second;
       q.pop();

       if(l!= -1 ){
           Node *lNode = new Node(l);
           p->left = lNode;
           p->left->val = l;
           q.push({p->left,level+1});
       }
       if(r!= -1 ){
           Node *rNode = new Node(r);
           p->right = rNode;
           p->right->val = r;
           q.push({p->right,level+1});
        }


   }

  //  printLavel(root);

   bool r = false;
   stack<pair<Node *,int>> s;
   vector<pair<Node*, int>> allV;
   s.push({root,1});
   int max_depth = 1;
   while(!s.empty()){
     Node *tem = s.top().first;
     int treelevel = s.top().second;
     allV.push_back({tem, treelevel});
     
     s.pop();
     if(tem->left == NULL && tem->right == NULL){
       max_depth = treelevel;
     }
     if(tem->left)
       s.push({tem->left,treelevel +1});
     if(tem->right)
       s.push({tem->right,treelevel +1});
   }

   for (int i = 0; i < allV.size();i++){
    //  cout << allV[i].fisrst->val<<" : "<< allV[i].second << endl;
     if(max_depth == allV[i].second){
       if(allV[i].first->left == NULL && allV[i].first->right == NULL){
         r = true;
       }else{
         r = false;
         break;
       }
      }else{
        if(allV[i].first->left != NULL && allV[i].first->right != NULL){
         r = true;
       }else{
         r = false;
         break;
       }
     }
   }
      // cout <<"max Depth : "<< max_depth << endl;
     if (r)
     {
       cout << "YES";
     }else{
     cout << "NO";
   }
     //  cout << r << endl

      // cout <<endl<< " v 1.0.0.1";
     return 0;
}