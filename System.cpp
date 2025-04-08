#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Student
{
    int id;
    string name;
    int age;
};

bool studentIDMatches(const Student &student, int id)
{
    return student.id == id;
}

void addStudent(vector<Student> &students)
{
    Student newStudent;
    cout << "Enter the student id: ";
    cin >> newStudent.id;
    cin.ignore(); // Clear newline character from input buffer
    cout << "Enter the name of the student: ";
    getline(cin, newStudent.name);
    cout << "Enter the age of the student: ";
    cin >> newStudent.age;
    students.push_back(newStudent);
    cout << "Student added successfully." << endl;
}

void displayStudents(const vector<Student> &students)
{
    cout << "Student records are: " << endl;
    for (const auto &student : students)
    {
        cout << "ID: " << student.id << ", Name: " << student.name << ", Age: " << student.age << endl;
    }
}

void searchStudent(const vector<Student> &students, int id)
{
    bool found = false;
    for (const auto &student : students)
    {
        if (student.id == id)
        {
            cout << "Student found!" << endl;
            cout << "ID: " << student.id << ", Name: " << student.name << ", Age: " << student.age << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Student with ID " << id << " not found." << endl;
    }
}

void updateStudent(vector<Student> &students, int id)
{
    bool found = false;
    for (auto &student : students)
    {
        if (student.id == id)
        {
            cout << "Enter new name for student: ";
            cin.ignore(); // Clear newline character from input buffer
            getline(cin, student.name);
            cout << "Enter new age for student: ";
            cin >> student.age;
            cout << "Student information updated." << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Student with ID " << id << " not found." << endl;
    }
}

int main()
{
    vector<Student> students;
    int choice;
    do
    {
        cout << "\nMenu:\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by ID\n";
        cout << "4. Update Student Information\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent(students);
            break;
        case 2:
            displayStudents(students);
            break;
        case 3:
            int searchID;
            cout << "Enter student ID to search: ";
            cin >> searchID;
            searchStudent(students, searchID);
            break;
        case 4:
            int updateID;
            cout << "Enter student ID to update: ";
            cin >> updateID;
            updateStudent(students, updateID);
            break;
        case 5:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 6." << endl;
        }
    } while (choice != 5);
    return 0;
}
