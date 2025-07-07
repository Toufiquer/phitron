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

    
int main(){
    // ! 
    
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;

    a -> next = tail;
    a -> previous = head;

    tail->previous = a;

    print_forward(head);
    cout <<endl<< "Working 2.5";


    return 0;
}