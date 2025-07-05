#include <bits/stdc++.h>
using namespace std;

class NodeClass{
    public:
        int data;
        NodeClass* next;
        NodeClass(int value){
            this->data = value;
            this->next = NULL;
        }
};
int main(){
    // !  Creating a Node
    NodeClass* head = new NodeClass(10);
    NodeClass* a = new NodeClass(20);
    NodeClass* b = new NodeClass(30);
    NodeClass* c = new NodeClass(40);

    head->next = a;
    a->next = b;
    b->next = c;
 

    // !  Printing the Node
    // cout <<head-> data<<" "<< a->data << " "<< b->data << " "<< c->data << " " << endl;
    // cout <<head-> data<<" "<< a->data << " "<< a->next->data<< " "<< a->next->next->data << " " << endl;
    NodeClass* tempHeader = head;
    while(tempHeader != NULL){
        cout << tempHeader->data << " ";
        tempHeader = tempHeader->next;
    }


    return 0;
}