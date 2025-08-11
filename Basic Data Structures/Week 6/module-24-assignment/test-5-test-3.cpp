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
};


struct StudentComparator {
    bool operator()(const Student& a, const Student& b) {
        if (a.marks != b.marks) {
            return a.marks < b.marks;
        } else {
            return a.roll > b.roll;
        }
    }
};


int main() {
    int n;
    cin >> n;

    priority_queue<Student, vector<Student>, StudentComparator> maxHeap;

    for (int i = 0; i < n; ++i) {
        string name;
        int roll;
        int marks;
        cin >> name >> roll >> marks;
        maxHeap.push(Student(name, roll, marks));
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        int command;
        cin >> command;

        if (command == 0) {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            maxHeap.push(Student(name, roll, marks));

            if (!maxHeap.empty()) {
                cout << maxHeap.top().name << " " << maxHeap.top().roll << " " << maxHeap.top().marks << endl;
            }
        } else if (command == 1) {
            if (maxHeap.empty()) {
                cout << "Empty" << endl;
            } else {
                cout << maxHeap.top().name << " " << maxHeap.top().roll << " " << maxHeap.top().marks << endl;
            }
        } else if (command == 2) {
            if (maxHeap.empty()) {
                cout << "Empty" << endl;
            } else {
                maxHeap.pop();
                if (maxHeap.empty()) {
                    cout << "Empty" << endl;
                } else {
                    cout << maxHeap.top().name << " " << maxHeap.top().roll << " " << maxHeap.top().marks << endl;
                }
            }
        }
    }

    return 0;
}