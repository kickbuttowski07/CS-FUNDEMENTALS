#include<bits/stdc++.h>
using namespace std;
// Object name can match with class member names too


class Rakesh {
    private:
        int a, b, c;
    public:
        int d, e;
        void setdata(int a, int b, int c); // Declaration in public to access elements of private
        // or setdata(int, int, int); 
        void getdata(){
            cout << "the value of a =" << a << endl;
            cout << "the value of b =" << b << endl;
            cout << "the value of c =" << c << endl;
            cout << "the value of d =" << d << endl;
            cout << "the value of e =" << e << endl;
        }
};


// This type of function calling can be learned next but use it as an example.
void Rakesh::setdata(int a1, int b1, int c1) { // Defining after declaration
    a = a1, b = b1, c = c1;
    // Here we can use to access the private members
}
// :: -> scope resolution. It tells the compiler: “This function belongs to the class Rakesh".

int main() {
    Rakesh rakhi;
    rakhi.d = 99, rakhi.e = 100;
    // rakhi.a = 50;
    // rakhi.b = 60;
    // rakhi.c = 70;
    // As they are belongs to private class modifiers they throws error, we can't directly access
    // We can access through 
    rakhi.setdata(50, 60, 70);
    rakhi.getdata();
}