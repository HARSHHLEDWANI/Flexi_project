#include<iostream>
using namespace std;

class complex{
    private:
        float real;
        float imag;
    public:
        complex() : real(0),imag(0) {}

        complex(float r , float i) : real(r) , imag(i){}

        friend complex add_complex(const complex& c1,const complex& c2);

        void display()const{
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
};

complex add_complex(const complex& c1,const complex& c2){
    complex result;
    result.real=c1.real+c2.real;
    result.imag=c1.imag+c2.imag;
    return result;
}
int main(){
    float real1,real2,imag1,imag2;
    cout << "Enter real and imaginary parts of the first complex number: ";
    cin >> real1 >> imag1;
    complex c1(real1, imag1);  // Using parameterized constructor

    cout << "Enter real and imaginary parts of the second complex number: ";
    cin >> real2 >> imag2;
    complex c2(real2, imag2);  // Using parameterized constructor

    // Adding two complex numbers using friend function
    complex sum = add_complex(c1, c2);

    cout << "\nFirst Complex Number: ";
    c1.display();
    cout << "Second Complex Number: ";
    c2.display();
    cout << "Sum of Complex Numbers: ";
    sum.display();

    return 0;
}
