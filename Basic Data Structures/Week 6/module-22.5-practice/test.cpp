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

Node* inputNode(){
    int a,y;
    cin >> a>>y;

    Node * root = new Node(y);
    a--;
    while(a--){
        int x;
        cin >> x;
        Node * temp = new Node(y);
        
    }
}
int main(){
   // !

  cout << " v 1.0.0.1";
 return 0;
}