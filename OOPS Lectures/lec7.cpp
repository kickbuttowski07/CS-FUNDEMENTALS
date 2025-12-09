// Friend Classes and Member Friend Fuctions
#include <bits/stdc++.h>
using namespace std;

// Forward Declaration so that complier get know that in future there will be a class of ComplexNumber 
class ComplexNumber;

class Calculator
{
public:
    int add(int v1, int v2);
    int sumRealcomplex(ComplexNumber, ComplexNumber);
    int sumImagcomplex(ComplexNumber, ComplexNumber);
} calc1;

int Calculator::add(int v1, int v2)
{
    return v1 + v2;
}

class ComplexNumber
{
    int a, b; // By default private
    friend int Calculator::sumRealcomplex(ComplexNumber, ComplexNumber);
    friend int Calculator::sumImagcomplex(ComplexNumber, ComplexNumber);
    // says that only the methods sumRealcomplex, sumImagcomplex methods of class Calculator can access the private members of the class ComplexNumber 
    // add method cannot access.
public:
    void setNumber(int v1, int v2);
    // Syntax declaration of Friend function so that you can access the private data members and methods by using a non class method;
    void print(void)
    {
        printf("The complex number is %d + %di \n", a, b);
    }
} c1, c2, c3;

void ComplexNumber::setNumber(int v1, int v2)
{
    a = v1, b = v2;
}

int Calculator::sumRealcomplex(ComplexNumber o1, ComplexNumber o2)
{
    return o1.a + o2.a;
}
int Calculator::sumImagcomplex(ComplexNumber o1, ComplexNumber o2)
{
    return o1.b + o2.b;
}

int main()
{
    c1.setNumber(1, 4);
    c1.print();

    c2.setNumber(4, 5);
    c2.print();

    int real = calc1.sumRealcomplex(c1, c2);
    int imag = calc1.sumImagcomplex(c1, c2);

    c3.setNumber(real, imag);
    c3.print();
    return 0;
}



// A friend function can also be given special grant to access private and protected members 
// Friend Function can be:
// 1. Method of another class 
// 2. A global function


class A{
    int a;
public:
    A() {
        a = 5;
    }
    friend void modify(); // global function
};

void modify() {
    A obj1; // default constructor assigns 5
    cout << obj1.a << endl; // accessing private members of class A
}

