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

void insert_at_head(Node*& head, Node*& tail, int value) {
    Node* new_node = new Node(value);
    if (head == NULL) {
        head = new_node;
        tail = new_node;
    } else {
        new_node->next = head;
        head = new_node;
    }
}

void insert_at_tail(Node*& head, Node*& tail, int value) {
    Node* new_node = new Node(value);
    if (head == NULL) {
        head = new_node;
        tail = new_node;
    } else {
        tail->next = new_node;
        tail = new_node;
    }
}
void delete_at_index(Node*& head, Node*& tail, int index) {
    if (index == 0) {
        if (head == NULL) { 
            return;
        }
        Node* node_to_delete = head;
        head = head->next;
        delete node_to_delete;
        if (head == NULL) {
            tail = NULL;
        }
        return;
    }

    Node* temp = head;
    for (int i = 0; i < index - 1; ++i) {
        if (temp == NULL || temp->next == NULL) {
            return;
        }
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        return; 
    }

    Node* node_to_delete = temp->next;
    temp->next = node_to_delete->next;
    if (temp->next == NULL) {
        tail = temp;
    }
    
    delete node_to_delete;
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

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; ++i) {
        int X, V;
        cin >> X >> V;

        if (X == 0) {
            insert_at_head(head, tail, V);
        } else if (X == 1) {
            insert_at_tail(head, tail, V);
        } else if (X == 2) {
            delete_at_index(head, tail, V);
        }

        print_list(head);
    }

    return 0;
}