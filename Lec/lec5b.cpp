#include <bits/stdc++.h>
using namespace std;
#define CN ComplexNumber

class CN {
    int a, b;
    static int count;

public:
    void setData(int v1, int v2);
    void setsum(CN o1, CN o2); // objects passing as arguments for the function
    void display(void);
    
} c1, c2, c3;

int CN::count;

void CN::setData(int v1, int v2) {
    a = v1, b = v2;
    count++;
}
// access the private data members and methods by using a class method;
// where friend function or method is a non class method;
void CN::setsum(CN o1, CN o2) {
    a = o1.a + o2.a;
    b = o1.b + o2.b;
    count++;
}

void CN::display() {
    printf("The id of the complex number is %d, the complex number is %d + %di \n", count, a, b);
}

int main() {
    c1.setData(1, 2);
    c1.display();
    c2.setData(3, 5);
    c2.display();
    c3.setsum(c1, c2);
    c3.display();
    return 0;
}