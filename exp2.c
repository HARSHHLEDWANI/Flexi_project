//add 2 complex number using structures
#include<stdio.h>

struct complex{
    float real;
    float imaginary;
};

struct complex addcomplex(struct complex c1,struct complex c2){
    struct complex result;
    result.real=c1.real+c2.real;
    result.imaginary=c1.imaginary+c2.imaginary;
    return result;
}

int main(){
    struct complex num1, num2,sum;
    printf("enter real and img part of number 1 :");
    scanf("%f %f",&num1.real,&num1.imaginary);
    printf("enter real and imaginary part of number 2");
    scanf("%f %f", &num2.real , &num2.imaginary);

    sum = addcomplex(num1,num2);

    printf("Sum is = %.2f + %.2fi\n",sum.real,sum.imaginary);

    return 0;
}