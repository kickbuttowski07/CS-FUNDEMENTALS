// Array of Objects & Objects passing as Function Arguments
#include <bits/stdc++.h>
using namespace std;

class employee {
    int id;
    int salary;

public:
    void setData(void);
    void getData(void);
} fb[3];

void employee::setData(void) {
    cout << "Enter the id value" << endl;
    cin >> id;
    cout << "Enter the salary value" << endl;
    cin >> salary;
}

void employee::getData(void) {
    printf("the id of the employee is %d and salary of the employee is %d \n", id, salary);
}

int main() {
    for (int i = 0; i < 3; i++) {
        fb[i].setData();
    }
    for (int i = 0; i < 3; i++) {
        fb[i].getData();
    }
    return 0;
}