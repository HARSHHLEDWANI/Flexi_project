#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;
public:
    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }
    void displayPersonDetails() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class from Person with virtual inheritance
class Employee : virtual public Person {
protected:
    int employeeID;
public:
    void setEmployeeDetails(int id) {
        employeeID = id;
    }
    void displayEmployeeDetails() {
        cout << "Employee ID: " << employeeID << endl;
    }
};

// Another derived class from Person with virtual inheritance
class Student : virtual public Person {
protected:
    int studentID;
public:
    void setStudentDetails(int id) {
        studentID = id;
    }
    void displayStudentDetails() {
        cout << "Student ID: " << studentID << endl;
    }
};

// Derived class from both Employee and Student, demonstrating multiple inheritance
class TeachingAssistant : public Employee, public Student {
public:
    void displayTeachingAssistantDetails() {
        // No ambiguity now, since we have a single instance of Person
        displayPersonDetails();
        displayEmployeeDetails();
        displayStudentDetails();
    }
};

int main() {
    TeachingAssistant ta;
    // Setting details as a person, employee, and student
    ta.setPersonDetails("Alex", 25);  // Now there's no ambiguity
    ta.setEmployeeDetails(1001);
    ta.setStudentDetails(2002);

    cout << "Teaching Assistant Details:\n";
    ta.displayTeachingAssistantDetails();

    return 0;
}
