#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Mentor {
private:
    string name;
    string contactInfo;

public:
    Mentor(const string& name, const string& contactInfo) : name(name), contactInfo(contactInfo) {}

    string getName() const {
        return name;
    }

    string getContactInfo() const {
        return contactInfo;
    }
};

class Student {
private:
    int id;
    string name;

public:
    Student(const int& id, const string& name) : id(id), name(name) {}

    int getId() const {
        return id;
    }

    string getName() const {
        return name;
    }
};

class Mentorship {
private:
    Mentor* mentor;
    vector<Student*> students;

public:
    Mentorship(Mentor* mentor) : mentor(mentor) {}

    ~Mentorship() {
        delete mentor;
        for (auto student : students) {
            delete student;
        }
    }

    void addStudent(Student* student) {
        students.push_back(student);
    }

    void displayMentorInfo() const {
        cout << "Mentor's name: " << mentor->getName() << endl;
        cout << "Contact Information: " << mentor->getContactInfo() << endl;
    }

    void displayStudentInfo() const {
        cout << "Students mentored by: " << mentor->getName() << endl;
        for (const auto& student : students) {
            cout << "Name: " << student->getName() << " id: " << student->getId() << endl;
        }
    }
};

int main() {
    Mentor* mentor = new Mentor("Anil Nemani", "9380147411");
    Student* student1 = new Student(1, "Alice");
    Student* student2 = new Student(2, "Bob");

    Mentorship* mentorship = new Mentorship(mentor);
    mentorship->addStudent(student1);
    mentorship->addStudent(student2);
    mentorship->displayMentorInfo();
    mentorship->displayStudentInfo();

    delete mentorship; 
    return 0;
}
