#include<bits/stdc++.h>
using namespace std;


class student {
    private:
        string name;
        int roll_no;
        int year;
        string dept;
        string clg;
        static int strength;
    public :
        student(void);

        void details(void);

        static int capacity(void);

        void new_admission(string name, int roll_no, string dept) {
            this->name = name;
            this->roll_no = roll_no;
            this->dept = dept;
            strength++;
        }

        void change_dept(string);
};

student::student(void) {
    clg = "IIT-BHU";
}

int student ::strength = 0;

int student :: capacity(void) {
    cout << "The strength of campus = " << strength << endl;
}


void student :: details (void) {
    cout << "name of the student = " << name << endl;
    cout << "roll number of the student = " << roll_no << endl;
    cout << "institute dept of the student = " << dept << endl;
}

void student :: change_dept(string new_dept) {
    dept = new_dept;
}





int main() {

}