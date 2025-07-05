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


void insert_at_any_position(Node* &head, int value,int idx){
    Node* new_node = new Node(value);
    Node* temp = head;
    for (int i = 1; i < idx;i++){
        tem = tem->next;
    }
    new_node->next = temp->next;
    temp -> next = new_node;
}

int main(){
    // !  Creating a Node
    Node* head = new Node(10);

 
 
    insert_at_any_position(head, 5,3);
    insert_at_any_position(head, 50,2);
    insert_at_any_position(head, 500,1);


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