#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void displayPersonInfo() const {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

class Employee {
protected:
    int employeeID;
    string department;

public:
    Employee(int id, string dept) : employeeID(id), department(dept) {}

    void displayEmployeeInfo() const {
        cout << "Employee ID: " << employeeID << "\nDepartment: " << department << endl;
    }
};

class Manager : public Person, public Employee {
private:
    int teamSize;

public:
    Manager(string n, int a, int id, string dept, int tSize)
        : Person(n, a), Employee(id, dept), teamSize(tSize) {}

    void displayManagerInfo() const {
        displayPersonInfo();
        displayEmployeeInfo();
        cout << "Team Size: " << teamSize << endl;
    }
};

int main() {
    Manager mgr("Alice", 35, 101, "HR", 10);

    cout << "Manager Information:" << endl;
    mgr.displayManagerInfo();

    return 0;
}
