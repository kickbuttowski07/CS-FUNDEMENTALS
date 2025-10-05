// Constructor Overloading
// 26-09-2024   03:46 AM;
// Prerequisites : Function Overloading
#include <bits/stdc++.h>
using namespace std;

class Complex {
    int a, b;

public:
    Complex(void) {
        a = 0, b = 0;
    }
    Complex(int, int);
    Complex(int);
    void print(void) {
        printf("The complex Number is %d + %di \n", a, b);
    }
};

Complex::Complex(int x, int y) {
    a = x, b = y;
};

Complex::Complex(int x) {
    a = x, b = 0;
};

int main() {
    Complex obj1(5, 6);
    obj1.print(); // The complex Number is 5 + 6i

    Complex obj2(6);
    obj2.print(); // The complex Number is 6 + 0i

    Complex obj3;
    obj3.print(); //The complex Number is 0 + 0i
    return 0;
}