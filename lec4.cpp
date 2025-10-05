// All about Static functions and data members
// https://www.geeksforgeeks.org/cpp/static-keyword-cpp/
// Static function and data members can access directly other static data members and data functions outside of the class also
// static member functions have a class scope, they do not have access to the this pointer of the class.
// For all non-static integer variables, the default value is garbage.
// For all the static and global variables, the same is set to 0.

#include <bits/stdc++.h>
using namespace std;

class Employee {
    int id;
    static int count;
    // static int count = 10; it is a syntax error
    // if we comment out int Employee::count, static int count and do with int count only, then for each object it will create a count variable. 
    // So for accessing multiple objects we need a static varible so we declare in this way.
public:
    void setData(void) {
        cout << "Enter the Id =";
        cin >> id;
        count++;
        // static data can be accessed in non static member functions.
    }
    void getData(void) {
        cout << "The id of the employee is = " << id << " " << ". This employee number is = " << count << endl;
    }
    static void getCount(void); // Static data function accessing static data member count;
    // static member function can be defined inside the class.
    // static void getcount(void) {
    //      cout << count << endl;
    // }

} rakhi, das, mahi;
// all the objects sharing the common variable called static variable and the memory is not alloted separatly in each object since it is common.
// Here the count variable is the static data member
int Employee::count = 0; // default value is 0;

// count = 15; throws error
// can also assign here from where the count value need to start like int Employee::count = 100;

void Employee::getCount(void){
    // cout << id << endl; it throws an error due to its not a static data.
    // cout << X.id << endl; it is correct as you can access the non static data in static using the object only.
    cout << "The value of the count is " << count << endl;
    // count is a static data member so can be accessible
}

// To access the static data functions/ methods use the below syntax:
// Employee::getCount();
// As the data function is common for all the objects data members.

int main() {
    rakhi.setData();
    rakhi.getData();
    Employee::getCount(); // accessing static member function 

    das.setData();
    das.getData();
    Employee::getCount();

    mahi.setData();
    mahi.getData();
    Employee::getCount();

    cout << "Works perfectly!!" << endl;
    return 0;
}


