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
    if(node == NULL) {
        cout << "Node is empty";
        return;
    };
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
  Node *root = new Node(10);
  root->left = new Node(20);
  root->right = new Node(30);
  root->left->left = new Node(40);
  root->left->right = new Node(50);
  root->right->left = new Node(60);
  root->right->right = new Node(70);

  printLavel(root);

  cout <<endl<< " v 1.0.0.1";
 return 0;
}