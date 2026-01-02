// Constructors with default arguments
#include <bits/stdc++.h>
using namespace std;

class simple {
    int val1, val2, val3;

public:
    simple(int a, int b, int c);
    void print(void);
};
// Right to left
simple::simple(int a, int b = 7, int c = 8) {
    val1 = a, val2 = b, val3 = c;
}

void simple::print(void) {
    printf("The value of val1 is %d, value of val2 is %d, value of val3 is %d \n", val1, val2, val3);
}

class simple1 {
    int val1, val2;

public:
    simple1(int a, int b);
    void print(void);
};

simple1::simple1(int a, int b = 7) {
    val1 = a, val2 = b;
}

void simple1::print(void) {
    printf("The value of val1 is %d, value of val2 is %d\n", val1, val2);
}

int main() {

    simple1 o1(5, 6);
    o1.print(); // The value of val1 is 5, value of val2 is 6

    simple1 o2(6);
    o2.print(); // The value of val1 is 6, value of val2 is 7

    // simple1 o3(void); // Leads to Error
    // o3.print();

    simple ob1(5, 6, 7);
    ob1.print(); // The value of val1 is 5, value of val2 is 6, value of val3 is 7

    simple ob2(5, 6);
    ob2.print(); // The value of val1 is 5, value of val2 is 6, value of val3 is 8

    simple ob3(5);
    ob3.print(); // The value of val1 is 5, value of val2 is 7, value of val3 is 8

    // simple ob4(void); // Leads to Error
    // ob4.print();
    return 0;
}