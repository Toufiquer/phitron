#include<bits/stdc++.h>
#include <iostream>

using namespace std;

// Standard Node class for a singly linked list.
class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        this->data = value;
        this->next = NULL;
    }
};

void build_list(Node* &head, Node* &tail) {
    int val;
    while (cin >> val && val != -1) {
        Node* new_node = new Node(val);
        if (head == NULL) {
            head = new_node;
            tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }
    }
}
void delete_list(Node* head) {
    Node* current = head;
    while (current != NULL) {
        Node* next_node = current->next;
        delete current;
        current = next_node;
    }
}
void print_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}



int main() {
    Node* head = NULL;
    Node* tail = NULL;

    build_list(head, tail);

    for (Node* current = head; current != NULL; current = current->next) {
        
        Node* previous = current; 
        Node* temp = current->next; 

        while (temp != NULL) {
            if (temp->data == current->data) {
                Node* node_to_delete = temp;
                previous->next = temp->next; 
                temp = temp->next;           
                delete node_to_delete;      
            } else {
                previous = temp;
                temp = temp->next;
            }
        }
    }

    print_list(head);

    delete_list(head);

    return 0;
}