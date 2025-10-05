// Making the entire class as a friend to a class
// So that every function in that can access the private parts of that class
#include <bits/stdc++.h>
using namespace std;

// Forward Declaration so that complier get know that in future there will be a class of complexNumber
class complexNumber;

class Calculator {
public:
    int add(int v1, int v2);
    int sumRealcomplex(complexNumber, complexNumber);
    int sumImagcomplex(complexNumber, complexNumber);
} calc1;

int Calculator::add(int v1, int v2) {
    return v1 + v2;
}

class complexNumber {
    int a, b; // By default private
    // friend int Calculator::sumRealcomplex(complexNumber, complexNumber);
    // friend int Calculator::sumImagcomplex(complexNumber, complexNumber);

    // Alternative:
    friend class Calculator; // friend class, can access private and protected members of other class in which it is declared as friend 
    // But not vice versa(one - way accessibility)   

public:
    void setNumber(int v1, int v2);
    // Syntax declaration of Friend function so that you can access the private data members and methods by using a non class method;
    void print(void)
    {
        printf("The complex number is %d + %di \n", a, b);
    }
} c1, c2, c3;

void complexNumber::setNumber(int v1, int v2) {
    a = v1, b = v2;
}

int Calculator::sumRealcomplex(complexNumber o1, complexNumber o2) {
    return o1.a + o2.a;
}
int Calculator::sumImagcomplex(complexNumber o1, complexNumber o2) {
    return o1.b + o2.b;
}

int main() {
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