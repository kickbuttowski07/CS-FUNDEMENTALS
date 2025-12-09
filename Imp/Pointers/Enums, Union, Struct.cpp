// Structures, unions and enumerations (enums) are 3 user defined data types in C++. 
// User defined data types allow us to create a data type specifically tailored for a particular purpose. 
// It is generally created from the built-in or derived data types


// Structures:
// Structure members cannot be initialized with declaration.
// C++ structures also support other class components such as constructor, destructor, access specifiers, etc.

// https://www.geeksforgeeks.org/cpp/structure-vs-class-in-cpp/
// STRUCTURES V/S CLASSES
// Remember that strings in C are actually an array of characters, and unfortunately, you can't assign a value to an array using obj.string = "xxx";
// need to use strcpy function to assign.
struct Owner {
  char firstName[30];
  char lastName[30];
};

struct Car {
  char brand[30];
  int year;
  struct Owner owner; // Nested structure
};

#include <iostream>
using namespace std;

typedef struct Point {
    // typedef used as alias also need to mention in the below
  private:
    int x, y;
  public:
    // Constructors
    Point(int a, int b) {
        x = a;
        y = b;
    }
    // Member function
    void show() {
        cout << x << " " << y << endl;
    }
    // Destructor
    ~Point() {
        cout << "Destroyed Point Variable" << endl;
    }
} pt; // mandatory in the case of typedef

int main() {
    // Creating Point variables using constructors
    pt s1(1, 1);
    pt s2(99, 1001);

    // Size
    cout << sizeof(pt) << endl;
    // Member functions doesn't contribute to the size of the structure
    // additional over head is STRUCTURE PADDING is added to the size of the structure


    // Can be nest with other structs

    // Pointer to struct:
    pt *ptr = &s1;
    ptr->show();

    // Structure with functions

    s1.show();
    s2.show();

    // Afer this they get destroyed(destructor)
    return 0;
}


// Unions:
// In C++, union is a user-defined datatype in which we can define members of different types of data types just like structures but unlike a structure, 
// where each member has its own memory, a union member shares the same memory location.
#include <stdio.h>
// only one member of the union can store a value at any given time. 
// The size of a union is determined by the size of its largest member.

// All similar functions related to struct also applicable to union

union Data {
    int i;
    double d;
    char c;
    // size = max(4, 8, 1) = 8
    void print() {
        printf("%d \n", i);
        printf("%.2f \n", d);
        // we can't access both values correctly simulataneously(as mem is shared)
    }
};

int main() {
  
    // Create a union variable
    Data data;

    // Store an integer in the union
    data.i = 100;
    printf("%d \n", data.i);

    data.print();

    // Store a double in the union (this will
  	// overwrite the integer value)
    data.d = 99.99;
    printf("%.2f \n", data.d);

    data.print();

    // Store a character in the union (this will
  	// overwrite the double value)
    data.c = 'A';
    printf("%c \n", data.c);
  
  	printf("Size: %d", sizeof(data)); // No over head of STRUCTURE PADDING, maximum of all the sizes of members
    return 0;
}


// Enums : Pending