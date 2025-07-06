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

void solve() {
    Node* head = NULL;
    Node* tail = NULL;

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

    int x;
    cin >> x;

    int index = 0;
    int found_index = -1; 
    Node* temp = head;

    while (temp != NULL) {
        if (temp->data == x) {
            found_index = index; 
            break;
        }
        temp = temp->next;
        index++;
    }

    cout << found_index << endl;
    Node* current = head;
    while (current != NULL) {
        Node* next_node = current->next;
        delete current;
        current = next_node;
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}