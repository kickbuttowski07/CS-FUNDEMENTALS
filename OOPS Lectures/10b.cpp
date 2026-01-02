// Parameterised and default Constructors
// Question: Create Function that takes to point objects and computes the distance
// 26-09-2024   03:46 AM;
#include <bits/stdc++.h>
using namespace std;


class point {
    int x, y;

public:
    point(int a, int b);
    void printpt(void) {
        printf("The point is (%d, %d)\n", x, y);
    }
    friend double Euclidean_Distance(point o1, point o2);
};
point::point(int a, int b) {
    x = a, y = b;
}

double Euclidean_Distance(point o1, point o2) {
    double val = sqrt((o1.x - o2.x) * (o1.x - o2.x) + (o1.y - o2.y) * (o1.y - o2.y));
    return val;
}

int main() {
    point obj1(2, 3);
    obj1.printpt();

    point obj2(3, 7);
    obj2.printpt();

    double distance = Euclidean_Distance(obj1, obj2);
    printf("The distance between the point is %f\n", distance);
    return 0;
}