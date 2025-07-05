#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int value){
            this->data = value;
            this->next = NULL;
        }
};


void insert_at_head(Node* &head, int value){
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}

int main(){
    // !  Creating a Node
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;
 
    insert_at_head(head, 5);
    insert_at_head(head, 50);
    insert_at_head(head, 500);


    // !  Printing the Node
    // cout <<head-> data<<" "<< a->data << " "<< b->data << " "<< c->data << " " << endl;
    // cout <<head-> data<<" "<< a->data << " "<< a->next->data<< " "<< a->next->next->data << " " << endl;
    Node* tempHeader = head;
    while(tempHeader != NULL){
        cout << tempHeader->data << " ";
        tempHeader = tempHeader->next;
    }


    return 0;
}