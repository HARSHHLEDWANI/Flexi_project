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

// Derived class from Person: Student
class Student : public Person {
private:
    string major;
    int year;

public:
    void setStudentInfo(const string& m, int y) {
        major = m;
        year = y;
    }

    void displayStudentInfo() const {
        displayPersonInfo(); // Display info from Person
        cout << "Major: " << major << "\nYear: " << year << endl;
    }
};

// Derived class from Person: Teacher
class Teacher : public Person {
private:
    string subject;
    int experience;

public:
    void setTeacherInfo(const string& s, int e) {
        subject = s;
        experience = e;
    }

    void displayTeacherInfo() const {
        displayPersonInfo(); // Display info from Person
        cout << "Subject: " << subject << "\nYears of Experience: " << experience << endl;
    }
};

int main() {
    // Creating an object for Student
    Student student;
    student.setPersonInfo("Alice", 20);
    student.setStudentInfo("Computer Science", 2);
    cout << "Student Information:" << endl;
    student.displayStudentInfo();

    cout << endl;

    // Creating an object for Teacher
    Teacher teacher;
    teacher.setPersonInfo("Mr. John", 45);
    teacher.setTeacherInfo("Mathematics", 15);
    cout << "Teacher Information:" << endl;
    teacher.displayTeacherInfo();

    return 0;
}
