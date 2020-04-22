#include<iostream>
#include<string.h>

using namespace std;

class student {
    int roll, age;
    char name[20];
public: 
    student() {
        roll = age =  0;
    }
    student(int a, int b, char c[20]) {
        roll = a,age = b;
        strcpy(name, c);
    }
    void show() {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main () {
    student stu[10];
    int n = 0, roll, age;
    char name[20];

    while(n < 10) {
        cout << "----------- Student " << n + 1 << " Record --------\n";
        cout << "Enter roll: ",cin >> roll;
        cout << "Enter name: ",cin >> name;
        cout << "Enter age: ",cin >> age;
        stu[n++] = student(roll, age, name);
    }
    n = 0;
    cout << endl<<endl;
    while(n < 10) {
        cout << "----------- Student " << n + 1 << " Record --------\n";
        stu[n++].show();
    }
    return 0;
}