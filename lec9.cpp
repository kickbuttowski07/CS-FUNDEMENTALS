// Constructors in C++

// Constructor::
// 1. Constructor is a special method which is invoked automatically at the time of object creation.
// 2. It is used to initialize the data members of new objects generally.
// 3. The constructor in C++ has the same name as class or structure.

#include <bits/stdc++.h>
using namespace std;

class Complex {
    int a, b;

public:
    // Creating a constructor.
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialise the objetcs of its class
    // It is automatically invoked whenever an object is created

    Complex(void); // constructor declaration
    void print(void) {
        printf("The complex Number is %d + %di \n", a, b);
    }
};

Complex::Complex(void) {
    a = 10, b = 5;
};
int main() {
    Complex obj;
    obj.print();
    return 0;
}

// Properties : 
// 1. It should be declared in the PUBLIC section of the class.
// 2. It is automatically INVOKED whenever an object is created.
// 3. It DON'T have return type and it DON'T return values.
// 4. It CAN have default arguments. like (int a = 9) in the function arguments.
// 5. We CANNOT refer to thier address.
// 6. If we DO specify a constructor, C++ compiler generates a default constructor for us (expects no parameters and has an empty body).
