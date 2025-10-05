// Friend Classes and Member Friend Fuctions
// Swap Function using Friend Function

#include <bits/stdc++.h>
using namespace std;

// Forward Declaration
class Y;

class X {
    int val1;
    friend void exchange(X &, Y &);// Call By reference so the value get changed

public:
    void setval(int n) {
        val1 = n;
    }
    void print(void) {
        cout << val1 << endl;
    }
};

class Y {
    int val2;
    friend void exchange(X &, Y &);

public:
    void setval(int n) {
        val2 = n;
    }
    void print(void) {
        cout << val2 << endl;
    }
};

void exchange(X &o1, Y &o2) {
    int temp = o1.val1;
    o1.val1 = o2.val2;
    o2.val2 = temp;
}

int main() {
    X a;
    a.setval(5);
    a.print();

    Y b;
    b.setval(7);
    b.print();

    exchange(a, b);

    a.print();
    b.print();
    return 0;
}