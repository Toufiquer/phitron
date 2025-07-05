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
    NodeClass a(500), b(600), c(700);
   

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    // !  Printing the Node
    cout << a.data << " "<< b.data << " "<< c.data << " " << endl;
    cout << a.data << " "<< a.next->data<< " "<< a.next->next->data << " " << endl;

    return 0;
}