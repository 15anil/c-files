#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    int health;
    int xp;
    string name;

public:
    // Default Constructor
    Person() : health(100), xp(0), name("Unknown") {}

    // Parameterized Constructor
    Person(int h, int x, const string& n) : health(h), xp(x), name(n) {}

    // Copy Constructor
    Person(const Person& other) : health(other.health), xp(other.xp), name(other.name) {}

    string get_name() const {
        return name;
    }

    int get_health() const {
        return health;
    }

    int get_xp() const {
        return xp;
    }
};

int main() {
    // Testing the constructors
    Person p1; // Default constructor
    cout << "Name: " << p1.get_name() << ", Health: " << p1.get_health() << ", XP: " << p1.get_xp() << endl;

    Person p2(80, 50, "Alice"); // Parameterized constructor
    cout << "Name: " << p2.get_name() << ", Health: " << p2.get_health() << ", XP: " << p2.get_xp() << endl;

    Person p3 = p2; // Copy constructor
    cout << "Name: " << p3.get_name() << ", Health: " << p3.get_health() << ", XP: " << p3.get_xp() << endl;

    return 0;
}
