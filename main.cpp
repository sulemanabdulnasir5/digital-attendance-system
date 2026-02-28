#include <iostream>
#include <string>
#include <vector>

using namespace std;

/* =========================
   STUDENT CLASS
========================= */

class Student {
public:
    string name;
    string indexNumber;

    Student(string n, string i) {
        name = n;
        indexNumber = i;
    }

    void display() {
        cout << "Name: " << name
             << ", Index Number: " << indexNumber << endl;
    }
};

vector<Student> students;

/* =========================
   STUDENT FUNCTIONS
========================= */

void registerStudent() {
    string name, index;
    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Index Number: ";
    getline(cin, index);

    students.push_back(Student(name, index));

    cout << "Student registered successfully!\n";
}

void viewStudents() {
    if (students.empty()) {
        cout << "No students registered.\n";
        return;
    }
    for (auto &s : students) s.display();
}

void searchStudent() {
    string index;
    cout << "Enter index number to search: ";
    cin >> index;

    for (auto &s : students) {
        if (s.indexNumber == index) {
            s.display();
            return;
        }
    }
    cout << "Student not found.\n";
}

/* =========================
   MAIN
========================= */

int main() {

    int choice;

    do {
        cout << "\n===== WEEK 1 =====\n";
        cout << "1. Register Student\n";
        cout << "2. View Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: registerStudent(); break;
            case 2: viewStudents(); break;
            case 3: searchStudent(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}