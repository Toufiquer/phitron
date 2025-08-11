#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks) {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }

    bool operator<(const Student& other) const {
        return marks < other.marks;
    }
     bool operator>(const Student& other) const {
        return marks > other.marks;
    }
     bool operator==(const Student& other) const {
        return (marks == other.marks && name == other.name && roll == other.roll);
    }
};

bool isEmpty(const vector<Student>& heap) {
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


void maxHeapify(vector<Student>& heap, int index) {
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
        maxHeapify(heap, largest);
    }
}


void insert(vector<Student>& heap, const Student& value) {
    heap.push_back(value);
    int currentIndex = heap.size() - 1;

    while (currentIndex > 0 && heap[currentIndex] > heap[getParentIndex(currentIndex)]) {
        swap(heap[currentIndex], heap[getParentIndex(currentIndex)]);
        currentIndex = getParentIndex(currentIndex);
    }
}

void deleteMax(vector<Student>& heap) {
    if (isEmpty(heap)) {
        return;
    }

    heap[0] = heap.back();
    heap.pop_back();

    if (!heap.empty()) {
        maxHeapify(heap, 0);
    }
}

void printHeap(const vector<Student>& heap) {
    if (isEmpty(heap)) {
        cout << "Heap is empty." << endl;
        return;
    }
    cout << "Heap: ";
    for (const Student& val : heap) {
        cout << val.name << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    vector<Student> maxHeap;

    for (int i = 0; i < n; ++i) {
        string name;
        int roll;
        int marks;
        cin >> name >> roll >> marks;
        Student newStudent(name, roll, marks);
        insert(maxHeap, newStudent);
    }

    int q;
    cin >> q;
    while (q--) {
        int qq;
        cin >> qq;
        if (qq == 0) {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student newStudent(name, roll, marks);
            insert(maxHeap, newStudent);
            cout << maxHeap[0].name <<" "<< maxHeap[0].roll<<" " << maxHeap[0].marks<< endl;
        } else if (qq == 1) {
            if (isEmpty(maxHeap)) {
                cout << "Empty" << endl;
            } else {
                cout << maxHeap[0].name <<" "<< maxHeap[0].roll<<" " << maxHeap[0].marks<< endl;
            }
        } else if (qq == 2) {
            deleteMax(maxHeap);
            if (isEmpty(maxHeap)) {
                cout << "Empty" << endl;
            } else {
                cout << maxHeap[0].name <<" "<< maxHeap[0].roll<<" " << maxHeap[0].marks<< endl;
            }
        }
    }

    return 0;
}