#include<bits/stdc++.h> 
using namespace std;
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

int main() {
    Node* head1 = NULL;
    Node* tail1 = NULL;
    
    Node* head2 = NULL;
    Node* tail2 = NULL;

    build_list(head1, tail1);
    build_list(head2, tail2);

    Node* temp1 = head1;
    Node* temp2 = head2;
    bool are_same = true;

    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->data != temp2->data) {
            are_same = false;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (are_same && (temp1 != NULL || temp2 != NULL)) {
        are_same = false;
    }
    

    if (are_same) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    delete_list(head1);
    delete_list(head2);

    return 0;
}