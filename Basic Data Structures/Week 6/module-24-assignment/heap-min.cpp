#include <bits/stdc++.h>
using namespace std;


// Helper function to check if the heap is empty
bool isEmpty(const vector<int>& heap) {
    return heap.empty();
}

// Function to get the parent index
int getParentIndex(int index) {
    return (index - 1) / 2;
}

// Function to get the left child index
int getLeftChildIndex(int index) {
    return (2 * index) + 1;
}

// Function to get the right child index
int getRightChildIndex(int index) {
    return (2 * index) + 2;
}

// Min-Heapify:  Maintains the min-heap property.  Crucial change from maxHeapify.
void minHeapify(vector<int>& heap, int index) {
    int smallest = index;  // Find smallest among node and children
    int left = getLeftChildIndex(index);
    int right = getRightChildIndex(index);

    if (left < heap.size() && heap[left] < heap[smallest]) {  // Changed: Compare with left child
        smallest = left;
    }

    if (right < heap.size() && heap[right] < heap[smallest]) { // Changed: Compare with right child
        smallest = right;
    }

    if (smallest != index) {
        swap(heap[index], heap[smallest]);
        minHeapify(heap, smallest); // Recursive call
    }
}



// Insert into a Min-Heap
void insert(vector<int>& heap, int value) {
    heap.push_back(value);
    int currentIndex = heap.size() - 1;

    // Heapify up (Bubble up) - Correct placement to maintain min-heap property
    while (currentIndex > 0 && heap[currentIndex] < heap[getParentIndex(currentIndex)]) { // Changed: < comparison
        swap(heap[currentIndex], heap[getParentIndex(currentIndex)]);
        currentIndex = getParentIndex(currentIndex);
    }
}


// Delete from a Min-Heap (Deletes the root, which is the min value)
int deleteMin(vector<int>& heap) { // changed the function name from deleteMax
    if (isEmpty(heap)) {
        cerr << "Heap is empty. Cannot delete." << endl;
        return -1; // Or throw an exception
    }

    int minVal = heap[0];
    heap[0] = heap.back();
    heap.pop_back();

    minHeapify(heap, 0); // Heapify down to restore the min-heap property. Important
    return minVal;
}

// Print the Heap
void printHeap(const vector<int>& heap) {
    if (isEmpty(heap)) {
        cout << "Heap is empty." << endl;
        return;
    }
    cout << "Heap: ";
    for (int val : heap) {
        cout << val << " ";
    }
    cout << endl;
}


int main() {
    vector<int> minHeap;

    insert(minHeap, 10);
    insert(minHeap, 5);
    insert(minHeap, 15);
    insert(minHeap, 2);
    insert(minHeap, 3);

    printHeap(minHeap); // Output: Heap: 2 3 15 10 5  (Order may vary, but 2 is the root)

    cout << "Deleted Min: " << deleteMin(minHeap) << endl; // Output: Deleted Min: 2
    printHeap(minHeap);  // Output: Heap: 3 5 15 10

    cout << "Deleted Min: " << deleteMin(minHeap) << endl; // Output: Deleted Min: 3
    printHeap(minHeap); // Output: Heap: 5 10 15
    return 0;
}
