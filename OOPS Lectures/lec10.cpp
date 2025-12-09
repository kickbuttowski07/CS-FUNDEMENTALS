// Parameterised and default Constructors
// 26-09-2024   03:28 AM;
#include <bits/stdc++.h>
using namespace std;

class Complex {
    int a, b;

public:
    Complex(int, int); // constructor declaration
    void print(void) {
        printf("The complex Number is %d + %di \n", a, b);
    }
};

Complex::Complex(int x, int y) { // This is a Parameterized constructor as it takes arguments of our wish
    a = x, b = y;
};

int main() {
    // Implicit Call
    Complex obj1(5, 6);
    obj1.print();

    // Explicit Call
    Complex obj2 = Complex(2, 4);
    obj2.print();

    return 0;
}