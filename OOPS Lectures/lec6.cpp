// All About Friend functions and Declarations
#include <bits/stdc++.h>
using namespace std;
class complexNumber
{
    int a, b; // By default private

public:
    void setNumber(int v1, int v2);
    // Syntax declaration of Friend function so that you can access the private data members and methods by using a non class method;
    friend complexNumber sumComplex(complexNumber o1, complexNumber o2);
    void print(void)
    {
        printf("The complex number is %d + %di \n", a, b);
    }
} c1, c2, c3;
void complexNumber::setNumber(int v1, int v2)
{
    a = v1, b = v2;
}
// In lec5b.cpp we implemented the same function using scope resolution operator see the difference
// you can under stand what the friend function actually is.
complexNumber sumComplex(complexNumber o1, complexNumber o2)
{
    complexNumber o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    c1.setNumber(1, 4);
    c1.print(); // output--> 1 + 4i

    c2.setNumber(2, 3);
    c2.print(); // output--> 2 + 3i

    c3 = sumComplex(c1, c2);
    c3.print(); // output--> 3 + 7i

    // c1.sumComplex(c2,c3) -- throws error as it is a return type and non void function

    // check:
    // 1 + 4i
    // 2 + 3i
    // ------
    // 3 + 7i
    return 0;
}

// Properties:
// 1. Not in scope of Class.
// 2. since it is not in the scope the class, it cannot be called from the object of that class.
//    c1.sumComplex(c2,c3) -- throws error as it is a return type and non void function
// 3. can be invoked without using the object
// 4. usually contains objects as arguments
// 5. Can be declared in ublic or private part of the class
// 6. cannot directly access the memn=bers by their names they use like object_name.a.....


// Important::
// ---> Friend function acts as a friendof the class.It can access the private and protected members of the class.
// ---> The friend function is not a member of the class, but it must be listed in the class definition.
// ---> The non-member function cannot access the private data of the class.
// ---> Sometimes, it is necessary for the non-member function to access the data.
// ---> The friend function is a non-member function and has the ability to access the private data of the class.

// Note::
// 1. A friend function cannot access the private membersdirectly, it has to use anobject name and dot operator with each membername.
// 2. Friend function uses objects as arguments.

// General Form:
// return_type Func_name(datatype o1, datatype o2)
// {
    //   defination  or body
// }