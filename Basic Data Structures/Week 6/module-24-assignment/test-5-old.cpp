#include <bits/stdc++.h>
using namespace std;


struct Student {
    string name;
    int age;
    int marks;
};

// Custom comparator for sorting students based on marks and age
bool compareStudents(const Student &a, const Student &b) {
    if (a.marks == b.marks) {
        return a.age < b.age; // If marks are equal, sort by age (smaller age first)
    }
    return a.marks > b.marks; // Sort by marks in descending order
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Consume the newline character

    vector<Student> students(n);
    for (int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].age >> students[i].marks;
    }

    int q;
    cin >> q;
    cin.ignore(); // Consume the newline character

    for (int i = 0; i < q; i++) {
        string line;
        getline(cin, line);

        if (line[0] == '1') {
            // Print maximum
            if (!students.empty()) {
                sort(students.begin(), students.end(), compareStudents);
                cout << students[0].name << " " << students[0].age << " " << students[0].marks << endl;
            } else {
                cout << "Empty" << endl;
            }
        } else if (line[0] == '2') {
            // Delete maximum
            if (!students.empty()) {
                sort(students.begin(), students.end(), compareStudents);
                students.erase(students.begin());
                if (!students.empty()) {
                    sort(students.begin(), students.end(), compareStudents);
                    cout << students[0].name << " " << students[0].age << " " << students[0].marks << endl;
                } else {
                    cout << "Empty" << endl;
                }
            } else {
                cout << "Empty" << endl;
            }
        } else if (line[0] == '0') {
            // Insert
            Student newStudent;
            sscanf(line.c_str(), "0 %s %d %d", &newStudent.name, &newStudent.age, &newStudent.marks);
            students.push_back(newStudent);
            if (!students.empty()) {
                sort(students.begin(), students.end(), compareStudents);
                cout << students[0].name << " " << students[0].age << " " << students[0].marks << endl;
            } else {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}