#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(int value){
            this->data = value;
            this->next = NULL;
        }
};

void insert_at_head(Node* &head, int value){
  
        Node *new_node = new Node(value);
        new_node->next = head;
        head = new_node;
    
}

void print_forward(Node* &head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl;
}

int main(){

    Node *head = NULL;
    insert_at_head(head, 10);
    insert_at_head(head, 20);
    cout << head->data << endl;
    print_forward(head);
    cout <<endl<< "Working 2.5";

    return 0;
}