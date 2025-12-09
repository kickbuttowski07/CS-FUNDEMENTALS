// Friend Classes and Member Friend Fuctions
#include <bits/stdc++.h>
using namespace std;

// Forward Declaration
class y;

class x {
    int data;

public:
    void setData(void);
    friend void add(x, y);
} a;

void x::setData(void) {
    printf("enter thr data = ");
    cin >> data;
}

class y {
    int num;

public:
    void setData(void);
    friend void add(x, y);
} b;

void y::setData(void) {
    printf("enter thr num =");
    cin >> num;
}

void add(x o1, y o2) {
    printf("The sum value is %d \n", o1.data + o2.num);
}

int main() {
    a.setData();
    b.setData();
    add(a, b);
    return 0;
}