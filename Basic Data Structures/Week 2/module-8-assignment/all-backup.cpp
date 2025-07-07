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

// 1. Insertion:

// - at head
void insert_at_head(Node* &head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}

// - at tail
void insert_at_tail(Node* &head, int value) {
    Node* new_node = new Node(value);
    if (head == NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}

// - at any position
void insert_at_position(Node* &head, int value, int position) {
    Node* new_node = new Node(value);
    if (position == 0) {
        insert_at_head(head, value);
        return;
    }

    Node* temp = head;
    for (int i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Position out of bounds" << endl;
        delete new_node; // Clean up memory if position is invalid
        return;
    }

    new_node->next = temp->next;
    temp->next = new_node;
}


// 2. Deletion:

// - head
void delete_head(Node* &head) {
    if (head == NULL) {
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

// - tail
void delete_tail(Node* &head) {
    if (head == NULL) {
        return;
    }
    if (head->next == NULL) { // Only one node
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

// - any position 
void delete_at_position(Node* &head, int position) {
    if (head == NULL) {
        return;
    }
    if (position == 0) {
        delete_head(head);
        return;
    }

    Node* temp = head;
    for (int i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        cout << "Position out of bounds" << endl;
        return;
    }

    Node* node_to_delete = temp->next;
    temp->next = temp->next->next;
    delete node_to_delete;
}


// 3. Printing:

// - forward
void print_forward(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// - backward (recursive)
void print_backward_recursive(Node* head) {
    if (head == NULL) {
        return;
    }
    print_backward_recursive(head->next);
    cout << head->data << " ";
}

void print_backward(Node* head) {
    print_backward_recursive(head);
    cout << endl;
}

// 4. Sorting
// - Ascending (using vector and sort)
void sort_ascending(Node* &head) {
    if (head == NULL || head->next == NULL) {
        return; // Already sorted or empty
    }

    vector<int> values;
    Node* temp = head;
    while (temp != NULL) {
        values.push_back(temp->data);
        temp = temp->next;
    }

    sort(values.begin(), values.end());

    temp = head;
    for (int value : values) {
        temp->data = value;
        temp = temp->next;
    }
}

// - Descending (using vector and sort with reverse)
void sort_descending(Node* &head) {
    if (head == NULL || head->next == NULL) {
        return; // Already sorted or empty
    }

    vector<int> values;
    Node* temp = head;
    while (temp != NULL) {
        values.push_back(temp->data);
        temp = temp->next;
    }

    sort(values.begin(), values.end(), greater<int>()); // Sort in descending order

    temp = head;
    for (int value : values) {
        temp->data = value;
        temp = temp->next;
    }
}


int main() {
    Node* head = NULL; // Initialize an empty list

    // Insertion Tests
    insert_at_tail(head, 10);
    insert_at_tail(head, 20);
    insert_at_head(head, 5);
    insert_at_position(head, 15, 2);
    cout << "After insertions: ";
    print_forward(head);  // Expected: 5 10 15 20

    // Deletion Tests
    delete_head(head);
    cout << "After deleting head: ";
    print_forward(head); // Expected: 10 15 20

    delete_tail(head);
    cout << "After deleting tail: ";
    print_forward(head);  // Expected: 10 15

    delete_at_position(head, 0);
    cout << "After deleting at position 0: ";
    print_forward(head); // Expected: 15

    // Re-initialize for sorting tests
    head = NULL;
    insert_at_tail(head, 30);
    insert_at_tail(head, 10);
    insert_at_tail(head, 20);
    insert_at_tail(head, 5);
    cout << "Before sorting: ";
    print_forward(head); // Expected: 30 10 20 5

    // Sorting Tests
    sort_ascending(head);
    cout << "After sorting ascending: ";
    print_forward(head); // Expected: 5 10 20 30

    sort_descending(head);
    cout << "After sorting descending: ";
    print_forward(head); // Expected: 30 20 10 5

    // Backward Print Test
    cout << "Backward print: ";
    print_backward(head); // Expected: 5 10 20 30
    return 0;
}