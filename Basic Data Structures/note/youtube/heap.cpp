#include <iostream>
#include <vector>
#include <algorithm> // For swap

using namespace std;

class MaxHeap {
private:
    vector<int> heap;

    // Helper function to get the parent index
    int parent(int i) {
        return (i - 1) / 2;
    }

    // Helper function to get the left child index
    int leftChild(int i) {
        return 2 * i + 1;
    }

    // Helper function to get the right child index
    int rightChild(int i) {
        return 2 * i + 2;
    }

public:
    // 5. Heapify Algorithm (Top-down approach)
    // This function maintains the heap property for a subtree rooted at index i
    void heapifyDown(int i) {
        int left = leftChild(i);
        int right = rightChild(i);
        int largest = i;

        // Check if left child is larger than the current largest
        if (left < heap.size() && heap[left] > heap[largest]) {
            largest = left;
        }

        // Check if right child is larger than the current largest
        if (right < heap.size() && heap[right] > heap[largest]) {
            largest = right;
        }

        // If the largest is not the root, swap and recursively heapify the affected subtree
        if (largest != i) {
            swap(heap[i], heap[largest]);
            heapifyDown(largest);
        }
    }
    
    // Helper function to bubble up an element to its correct position
    void heapifyUp(int i) {
        // While the element is not the root and is greater than its parent
        while (i > 0 && heap[i] > heap[parent(i)]) {
            swap(heap[i], heap[parent(i)]);
            i = parent(i);
        }
    }

    // 3. Insertion in Heap
    void insert(int data) {
        // Add the new element to the end of the array
        heap.push_back(data);
        // Get the index of the last element
        int last_index = heap.size() - 1;
        // Heapify up from the last element to maintain the heap property
        heapifyUp(last_index);
    }

    // 4. Deletion in Heap (extracting the maximum element)
    int extractMax() {
        if (heap.empty()) {
            throw out_of_range("Heap is empty");
        }
        // The maximum element is at the root
        int maxElement = heap[0];
        // Replace the root with the last element
        heap[0] = heap.back();
        heap.pop_back();

        // If the heap is not empty, heapify down from the root
        if (!heap.empty()) {
            heapifyDown(0);
        }
        return maxElement;
    }

    // Function to build a max heap from an array
    void buildHeap(const vector<int>& arr) {
        heap = arr;
        // Start from the last non-leaf node and heapify down
        for (int i = (heap.size() / 2) - 1; i >= 0; i--) {
            heapifyDown(i);
        }
    }

    void printHeap() const {
        for (int val : heap) {
            cout << val << " ";
        }
        cout << endl;
    }

    int getSize() const {
        return heap.size();
    }
};

// 6. Heap Sort
void heapSort(vector<int>& arr) {
    MaxHeap heap;
    // Build a max heap from the input array
    heap.buildHeap(arr);

    // One by one extract an element from heap
    for (int i = arr.size() - 1; i >= 0; i--) {
        // Move current root to end
        arr[i] = heap.extractMax();
    }
}


int main() {
    cout << "1. What is a Complete Binary Tree?" << endl;
    cout << "   A complete binary tree is a binary tree in which all levels are completely filled except possibly the last, which is filled from left to right." << endl << endl;

    cout << "2. Max or Min Heap" << endl;
    cout << "   - Max Heap: The value of a node is greater than or equal to the values of its children. The root holds the maximum value." << endl;
    cout << "   - Min Heap: The value of a node is less than or equal to the values of its children. The root holds the minimum value." << endl << endl;

    MaxHeap myHeap;

    cout << "3. Insertion in Heap" << endl;
    myHeap.insert(10);
    myHeap.insert(20);
    myHeap.insert(15);
    myHeap.insert(30);
    myHeap.insert(40);
    cout << "   Heap after insertions: ";
    myHeap.printHeap();
    cout << endl;
    
    cout << "4. Deletion in Heap (extracting max)" << endl;
    cout << "   Extracted max element: " << myHeap.extractMax() << endl;
    cout << "   Heap after deletion: ";
    myHeap.printHeap();
    cout << endl;

    cout << "5. Heapify Algorithm" << endl;
    vector<int> data = {3, 5, 9, 6, 8, 20, 10, 12, 18, 9};
    MaxHeap heapFromArr;
    heapFromArr.buildHeap(data);
    cout << "   Original array: 3 5 9 6 8 20 10 12 18 9" << endl;
    cout << "   Heap after heapify (buildHeap): ";
    heapFromArr.printHeap();
    cout << endl;
    
    cout << "6. Heap Sort" << endl;
    vector<int> arrToSort = {12, 11, 13, 5, 6, 7};
    cout << "   Original array: 12 11 13 5 6 7" << endl;
    heapSort(arrToSort);
    cout << "   Sorted array: ";
    for (int val : arrToSort) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}