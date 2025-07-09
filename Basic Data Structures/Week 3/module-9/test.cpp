#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node* previous;
        Node(int value) {
            this->data = value;
            this->next = NULL;
            this->previous = NULL;
        }
    };

void print_forward(Node* &head){
        Node *temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp=temp->next;
        }
        cout << endl;
    }
    
void print_backward(Node* &tail){
        Node *temp = tail;
        while(temp != NULL){
            cout << temp->data << " ";
            temp=temp->previous;
        }
        cout << endl;
    }

void insert_head(Node * &head, Node* &tail, int val){
    Node *new_node = new Node(val);
    if(head == NULL){
        head = new_node;
        tail = new_node;
        return;
    }
    new_node->next = head;
    head->previous = new_node;
    head = new_node;
}

void insert_tail(Node* &head, Node * &tail, int val){
    Node *new_node = new Node(val);
    if(head == NULL){
        head = new_node;
        tail = new_node;
        return;
    }
    new_node->previous = tail;
    tail->next = new_node;
    tail = new_node;
}

void insert_at_any_position(Node* &head,int pos, int val){

    Node *new_node = new Node(val);
    
    Node *temp = head;
    int counter = 0;
    while(counter<= pos-2){
        counter++;
        temp = temp->next;
    }
    new_node->next = temp->next;
    new_node->previous = temp;

    temp->next->previous = new_node;
    temp->next = new_node;

    // temp->next->previous = new_node;
    // temp->next->previous = new_node;
}
void delete_at_any_position(Node* &head, Node *&tail,int pos){
    if(head==tail){
        head = tail = NULL;
        return;
    }
    if(head == NULL){
        cout << "There is no value in the linked list" << endl;
        return;
    }

    Node *temp = head;
    int counter = 1;
    while(counter<= pos){
        counter++;
        temp = temp->next;
    }
    temp->previous->next = temp -> next;
    temp->next->previous = temp->previous;
}

void delete_from_head(Node* &head, Node * &tail){
    if(head == tail){
        head = tail = NULL;
    }
    if(head == NULL){
        cout << "There is no value in the linked list" << endl;
        return;
    }
    Node *temp = head;
    head = temp->next;
    delete temp;
    head->previous = NULL;
}
void delete_from_tail(Node*&head,Node* &tail){
    if(head == tail){
        head = tail = NULL;
    }
    if(tail == NULL){
        cout << "There is no value in the linked list" << endl;
        return;
    }
    Node *temp = tail;
    tail->previous->next = NULL;
    delete temp;
}


int main(){
    // ! 
    
    Node *head = new Node(100);
    Node *a = new Node(200);
    Node *tail = new Node(3000);

    head->next = a;
    a->next = tail;

    a -> previous = head;
    tail->previous = a;

    insert_head(head,tail,3);
    insert_head(head,tail,2);
    insert_head(head,tail,1);
    insert_tail(head,tail,50);
    insert_tail(head,tail,500);
    insert_tail(head,tail,5000);
    insert_at_any_position(head, 2, 22);
    insert_at_any_position(head, 3, 33);
    delete_at_any_position(head, tail, 5);
    // delete_from_head(head,tail);
    // delete_from_tail(head,tail);
    print_forward(head);
    // print_backward(tail);


    cout <<endl<< "Working 2.5";

    return 0;
}