#include <bits/stdc++.h>
using namespace std;

class NodeClass{
    public:
        int data;
        NodeClass* next;
};
int main(){
    // !  Creating a Node
    NodeClass a, b, c;
    a.data = 10;
    b.data = 20;
    c.data = 30;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    // !  Printing the Node
    // cout << a.data << " "<< b.data << " "<< c.data << " " << endl;
    cout << a.data << " "<< a.next->data<< " "<< a.next->next->data << " " << endl;

    return 0;
}