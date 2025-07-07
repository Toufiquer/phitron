#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(int value){
            this->data = value;
            this->next = NULL;
        }
};

int main(){

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    cout << "address : head : " << &head << endl;
    cout << "address : head : " << *(&head) << endl;
    cout << endl;
    cout << "address : a : " << &a << endl;
    cout << "address : a : " << *(&a) << endl;
    cout << endl;
    cout << "address : tail : " << &tail << endl;
    cout << "address : tail : " << *(&tail) << endl;

    cout << endl;

    head->next = a;
    a->next = tail;
    cout << "head address: " << *(&head) << endl;
    cout << "head data: " << head->data << endl;
    cout << "head n address: " << head->next << endl;
    cout << endl;
    cout << "a address: " << *(&a) << endl;
    cout << "a data: " << a->data << endl;
    cout << "a n address: " << a->next<< endl;
    
    cout << endl;
    cout << "tail address: " << *(&tail) << endl;
    cout << "tail data : " << tail->data << endl;
    cout << "tail n address: " << tail->next<< endl;

    cout <<endl<< "Working 2.2";

    return 0;
}