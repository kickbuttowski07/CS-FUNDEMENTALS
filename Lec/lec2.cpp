//  OOPS ---> Classes and Objects
//  C++ ---> Intially called as "C with classes" by stroustroup
//  Classes --> Extensions of structures in (c)
//  Structures had limitations:
//          - members are public default
//          - No methods
//  classes ---> structures + more
//  classes ---> can have methods and properties
//  classes ---> can make few members as private and few members as public
//  Structures in c++ are typdefined
/*you can declare objects along with the class declaration like this:
    class Rakesh{
        // class defination
    } rakhi, das, mahi;*/
// rakhi.salary = 80 makes no sense, if salary is a part of private access modifiers;

#include <bits/stdc++.h>
using namespace std;

class Rakesh {
private:
    string s;
    // Can't Directly access
public:
    static int count;
    void get(void);
    void chk_bin(void);
    void onescomp(void);
    void print(void);
} b;

// You can resolute only the public members

int Rakesh::count = 0; // like this you can't do for private members(non static attributes, methods) (since they are created for each object)
// But can do by modifying or assigning in public member functions like below function


// here the scope resolution tells the compiler, that get function belongs to the class Rakesh
void Rakesh::get(void) {
    cout << "Enter the Binary number=" << endl;
    // string st;
    // cin >> st;
    // s = st;
    cin >> s;
    // we can either assign or directly take input
}


void Rakesh::chk_bin(void) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '0' && s[i] != '1') {
            cout << "Not a Binary Number" << endl;
            exit(0);
        }
    }
    cout << "Binary Number" << endl;
}

void Rakesh::onescomp(void) {
    b.chk_bin();
    for (int i = 0; i < s.size(); i++) {
        s[i] ^= 1;
    }
}

void Rakesh::print(void) {
    cout << "s=  " << s << endl;
}

int main()
{
    b.get();
    b.chk_bin();
    cout << "Before" << endl;
    b.print();
    b.onescomp();
    cout << "After" << endl;
    b.print();
    return 0;
}


// --->"::" is a "scope resolution Operator"
// Declaration syntax: return type of (member of the class) Class_name :: member_name(return_type of arguments it take) {}

// 1. Accessing global variables when local variable has same name
/*
int value = 100;   // global variable
class Test {
public:
    void show() {
        int value = 50;  // local variable
        cout << "Local value: " << value << endl;
        cout << "Global value: " << ::value << endl; // using :: to access global
    }
};
*/

// 2. Defining class member functions, member attributes outside the class
/*
class Student {
public:
    void display();
};

// Function definition outside the class using ::
void Student::display() {
    cout << "Hello from Student class" << endl;
}
*/

// 3. Working with namespaces
/*
namespace Math {
    int add(int a, int b) { return a + b; }
}

int main() {
    cout << Math::add(3, 4);  // scope resolution operator with namespace
}

*/