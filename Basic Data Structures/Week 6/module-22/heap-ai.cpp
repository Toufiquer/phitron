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


// Max-Heapify:  Ensures the heap property is maintained after insertion/deletion
void maxHeapify(vector<int>& heap, int index) {
    int largest = index;
    int left = getLeftChildIndex(index);
    int right = getRightChildIndex(index);

    if (left < heap.size() && heap[left] > heap[largest]) {
        largest = left;
    }

    if (right < heap.size() && heap[right] > heap[largest]) {
        largest = right;
    }

    if (largest != index) {
        swap(heap[index], heap[largest]);
        maxHeapify(heap, largest); // Recursive call to fix the heap property further down
    }
}


// Insert into a Max-Heap
void insert(vector<int>& heap, int value) {
    heap.push_back(value);  // Add the element to the end
    int currentIndex = heap.size() - 1;

    // Heapify up (Bubble up): Correct placement to maintain heap property
    while (currentIndex > 0 && heap[currentIndex] > heap[getParentIndex(currentIndex)]) {
        swap(heap[currentIndex], heap[getParentIndex(currentIndex)]);
        currentIndex = getParentIndex(currentIndex);
    }
}

// Delete from a Max-Heap (Deletes the root, which is the max value)
int deleteMax(vector<int>& heap) {
    if (isEmpty(heap)) {
        cerr << "Heap is empty. Cannot delete." << endl;
        return -1; // Or throw an exception
    }

    int maxVal = heap[0];
    heap[0] = heap.back(); // Replace root with the last element
    heap.pop_back(); // Remove the last element

    maxHeapify(heap, 0); // Heapify down to restore the heap property
    return maxVal;
}

// Print the Heap (for verification) - simple level order traversal.  Can be improved.
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
    vector<int> maxHeap;

    insert(maxHeap, 5);
    insert(maxHeap, 10);
    insert(maxHeap, 3);
    insert(maxHeap, 15);
    insert(maxHeap, 2);

    printHeap(maxHeap); // Output: Heap: 15 10 3 5 2

    cout << "Deleted Max: " << deleteMax(maxHeap) << endl; // Output: Deleted Max: 15
    printHeap(maxHeap); // Output: Heap: 10 5 3 2

    cout << "Deleted Max: " << deleteMax(maxHeap) << endl; // Output: Deleted Max: 10
    printHeap(maxHeap); // Output: Heap: 5 2 3

    return 0;
}
