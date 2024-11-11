#include<iostream>
using namespace std;

class complex {
private:
    int real;
    int imag;

public:
    complex(int r = 0, int i = 0) : real(r), imag(i) {}

    void display() const {
        cout << real << "+" << imag << "i" << endl;
    }

    // Prefix increment operator
    complex& operator++() {
        ++real;
        ++imag;
        return *this;
    }

    // Postfix increment operator
    complex operator++(int) {
        complex temp = *this;
        ++real;
        ++imag;
        return temp;
    }

    // Addition operator
    complex operator+(const complex& other) {
        return complex(real + other.real, imag + other.imag);
    }

    // Comparison operator (<) to compare magnitudes
    bool operator<(const complex& other) {
        return (real * real + imag * imag) < (other.real * other.real + other.imag * other.imag);
    }

    virtual void print() const {
        display();
    }
};

int main() {
    complex c1(2, 3), c2(1, 4), result;
    int choice;
    complex temp;

    do {
        cout << "\nMenu:\n";
        cout << "1. Display Complex Numbers\n";
        cout << "2. Prefix Increment\n";
        cout << "3. Postfix Increment\n";
        cout << "4. Add Two Complex Numbers\n";
        cout << "5. Compare Two Complex Numbers\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Complex number 1: ";
            c1.display();
            cout << "Complex number 2: ";
            c2.display();
            break;

        case 2:
            ++c1; // Prefix increment
            cout << "After prefix increment, Complex number 1: ";
            c1.display();
            break;

        case 3:
            temp = c2++; // Postfix increment
            cout << "After postfix increment, Complex number 2: ";
            c2.display();
            cout << "The original complex number (before increment): ";
            temp.display();
            break;

        case 4:
            result = c1 + c2; // Add two complex numbers
            cout << "Sum of Complex numbers: ";
            result.display();
            break;

        case 5:
            if (c1 < c2) { // Compare two complex numbers
                cout << "Complex number 1 is smaller than Complex number 2.\n";
            } else {
                cout << "Complex number 1 is larger than or equal to Complex number 2.\n";
            }
            break;

        case 6:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
