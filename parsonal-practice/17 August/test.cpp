#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node *left;
        Node *right;
        Node(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

void getInput(Node* &root){
    queue<Node*> qNode;
   qNode.push(root);
    while(!qNode.empty()){
        Node* currNode = qNode.front();
        qNode.pop();
        int i, j;
        cin >> i >> j;
        if(i!=-1){
            Node *lNode = new Node(i);
            currNode->left = lNode;
            qNode.push(lNode);
        }
        if(j!=-1){
            Node *rNode=new Node(j);
            currNode->right = rNode;
            qNode.push(rNode);
        }
    }
}

void printPreOrder(Node * root){
    if(root == NULL)
        return;
   if(root->val!= -1){
       cout << root->val << " ";
   }
   if(root->left){
       printPreOrder(root->left);
   }
   if(root->right){
       printPreOrder(root->right);
   }
}
void printPostOrder(Node * root){
    if(root == NULL)
        return;
        if(root->left){
            printPostOrder(root->left);
        }
        if(root->right){
            printPostOrder(root->right);
        }
        if(root->val!= -1){
            cout << root->val << " ";
        }
}
void printInOrder(Node * root){
    if(root == NULL)
        return;
        if(root->left){
            printInOrder(root->left);
        }
        if(root->val!= -1){
            cout << root->val << " ";
        }
   if(root->right){
       printInOrder(root->right);
   }
}
void printLavelOrder(Node * root){
    if(root == NULL){
        return;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node *currNode = q.front();
        q.pop();
        if(currNode == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
                cout << currNode->val << " ";
            if(currNode->left){
                q.push(currNode->left);
            }
            if(currNode->right){
                q.push(currNode->right);
            }
        }
    }
}
int main(){
    // !
    int a;
    cin >> a;
    if(a== -1){
        return 0;
    }
    Node *root = new Node(a);
    getInput(root);
    printPreOrder(root);
    cout << endl;
    printPostOrder(root);
    cout << endl;
    printInOrder(root);
    cout <<endl<< "---- lavel order ----" << endl;
    printLavelOrder(root);
    cout <<endl<< "Working 4.0";

 

    return 0;
}