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

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int value;
    while (cin >> value && value != -1) {
        Node* new_node = new Node(value);
        if (head == NULL) {
            head = new_node;
            tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }
    }
    if (head == NULL || head->next == NULL) {
        cout << 0 << endl;
        return 0;
    }

    int min_value = head->data;
    int max_value = head->data;

    Node* temp = head;
    while (temp != NULL) {
        min_value = min(min_value, temp->data);
        max_value = max(max_value, temp->data);
        temp = temp->next;
    }

    cout << max_value - min_value << endl;

    return 0;
}