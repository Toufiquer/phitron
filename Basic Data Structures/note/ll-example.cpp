An updated version of the C++ code is provided below, incorporating the requested linked list operations. This comprehensive example demonstrates insertion, deletion, printing in both forward and backward order, and sorting in both ascending and descending order using the std::list container.

Updated C++ Code with Linked List Operations
Generated cpp
#include<bits/stdc++.h>

using namespace std;

// Function to print the list forward
void printForward(const list<int>& l) {
    for (int val : l) {
        cout << val << " ";
    }
    cout << endl;
}

// Function to print the list backward
void printBackward(const list<int>& l) {
    for (auto it = l.rbegin(); it != l.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    // !! Linked List Operations

    // 1. Insertion:
    list<int> myList = {10, 20, 30};
    cout << "Initial list: ";
    printForward(myList);

    //  - at head
    myList.push_front(5);
    cout << "After inserting 5 at the head: ";
    printForward(myList);

    //  - at tail
    myList.push_back(40);
    cout << "After inserting 40 at the tail: ";
    printForward(myList);

    //  - at any position
    list<int>::iterator it = myList.begin();
    advance(it, 2); // Move iterator to the 3rd position
    myList.insert(it, 25);
    cout << "After inserting 25 at the 3rd position: ";
    printForward(myList);
    cout << endl;

    // 2. Deletion:
    //  - head
    myList.pop_front();
    cout << "After deleting the head: ";
    printForward(myList);

    //  - tail
    myList.pop_back();
    cout << "After deleting the tail: ";
    printForward(myList);

    //  - any position
    it = myList.begin();
    advance(it, 1); // Move iterator to the 2nd position
    myList.erase(it);
    cout << "After deleting the element at the 2nd position: ";
    printForward(myList);
    cout << endl;

    // 3. Printing:
    cout << "Printing forward: ";
    printForward(myList);

    cout << "Printing backward: ";
    printBackward(myList);
    cout << endl;

    // 4. Sorting
    list<int> unsortedList = {50, 10, 40, 30, 20};
    cout << "Unsorted list: ";
    printForward(unsortedList);

    //  - Ascending
    unsortedList.sort();
    cout << "Sorted in ascending order: ";
    printForward(unsortedList);

    //  - Descending
    unsortedList.sort(greater<int>());
    cout << "Sorted in descending order: ";
    printForward(unsortedList);

    return 0;
}

Explanation of Operations

Insertion

push_front(value): Inserts a new element at the beginning of the list.

push_back(value): Appends a new element to the end of the list.

insert(iterator, value): Inserts a new element before the element at the specified iterator position. To insert at a specific index, you can advance an iterator from the beginning of the list.

Deletion

pop_front(): Removes the first element of the list.

pop_back(): Removes the last element of the list.

erase(iterator): Removes the element at the specified iterator position.

Printing

Forward Printing: This can be achieved by iterating through the list from begin() to end() using a for-each loop or a standard iterator-based for loop.

Backward Printing: To print the list in reverse, reverse iterators are used, starting from rbegin() and iterating to rend().[1]

Sorting

sort(): This member function sorts the elements of the list in ascending order by default.[2][3]

sort(greater<int>()): To sort in descending order, you can pass std::greater<int>() as a comparison function to the sort method.

Sources
help
geeksforgeeks.org
geeksforgeeks.org
geeksforgeeks.org
Google Search Suggestions
Display of Search Suggestions is required when using Grounding with Google Search. Learn more
C++ std::list delete from head
C++ std::list delete from tail
C++ std::list delete from specific position
C++ std::list forward iteration
C++ std::list reverse iteration
C++ std::list sort ascending
C++ std::list sort descending