#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void setPersonInfo(const string& n, int a) {
        name = n;
        age = a;
    }

    void displayPersonInfo() const {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

// Derived class from Person
class Employee : public Person {
protected:
    int employeeID;

public:
    void setEmployeeInfo(int id) {
        employeeID = id;
    }

    void displayEmployeeInfo() const {
        displayPersonInfo(); // Calling the function from Person
        cout << "Employee ID: " << employeeID << endl;
    }
};

// Further derived class from Employee
class Manager : public Employee {
private:
    string department;

public:
    void setManagerInfo(const string& dept) {
        department = dept;
    }

    void displayManagerInfo() const {
        displayEmployeeInfo(); // Calling the function from Employee
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager manager;

    // Setting information for manager
    manager.setPersonInfo("Alice", 35);    // From Person
    manager.setEmployeeInfo(1001);         // From Employee
    manager.setManagerInfo("Sales");       // From Manager

    cout << "Manager Information:" << endl;
    manager.displayManagerInfo();          // Displays all info in chain

    return 0;
}
