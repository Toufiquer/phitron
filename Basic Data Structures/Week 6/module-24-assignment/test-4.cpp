#include <bits/stdc++.h>
using namespace std;


bool isEmpty(const vector<int>& heap) {
    return heap.empty();
}

int getParentIndex(int index) {
    return (index - 1) / 2;
}

int getLeftChildIndex(int index) {
    return (2 * index) + 1;
}

int getRightChildIndex(int index) {
    return (2 * index) + 2;
}

void minHeapify(vector<int>& heap, int index) {
    int smallest = index;
    int left = getLeftChildIndex(index);
    int right = getRightChildIndex(index);

    if (left < heap.size() && heap[left] < heap[smallest]) {
        smallest = left;
    }

    if (right < heap.size() && heap[right] < heap[smallest]) {
        smallest = right;
    }

    if (smallest != index) {
        swap(heap[index], heap[smallest]);
        minHeapify(heap, smallest); 
    }
}

void insert(vector<int>& heap, int value) {
    heap.push_back(value);
    int currentIndex = heap.size() - 1;

    while (currentIndex > 0 && heap[currentIndex] < heap[getParentIndex(currentIndex)]) {
        swap(heap[currentIndex], heap[getParentIndex(currentIndex)]);
        currentIndex = getParentIndex(currentIndex);
    }
}

int deleteMin(vector<int>& heap) {
    if (isEmpty(heap)) {
        cerr << "Empty" << endl;
        return -1; 
    }

    int minVal = heap[0];
    heap[0] = heap.back();
    heap.pop_back();

    minHeapify(heap, 0); 
    return minVal;
}

void printHeap(const vector<int>& heap) {
    if (isEmpty(heap)) {
        cout << "Empty" << endl;
        return;
    }
    for (int val : heap) {
        cout << val << " ";
    }
    cout << endl;
}



int main() {
    int n;
    cin >> n;

    
    vector<int> minHeap;

    
    while(n--){
        int val;
        cin >> val;
        insert(minHeap, val);
    }

    int q;
    cin >> q;
    while(q--){
        int qq;
        cin >> qq;
        if(qq == 0){
            int newVal;
            cin >> newVal;
            insert(minHeap, newVal);
            cout << minHeap[0] << endl;
        }else if(qq == 1){
            if(isEmpty(minHeap)){
                cout << "Empty" << endl;
            }else{
                cout << minHeap[0] << endl;
            }
        }else if(qq== 2){
            deleteMin(minHeap);
             if(isEmpty(minHeap)){
                cout << "Empty" << endl;
            }else{
                cout << minHeap[0] << endl;
            }
        };
    }

    return 0;
}