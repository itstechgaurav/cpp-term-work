#include<iostream>
#include<stdlib.h>

using namespace std;

char sname[10][10];

class student {
    int id,age,i;
    char name[10], g;
    float marks[5], avg, total;
    void calc() {
        total = 0;
        for(i = 0; i < 5; i++) {
            total+=marks[i];
        }
        avg = total/5;

        // grades

        if(avg >= 80) g = 'A';
        else if(avg < 80 && avg >= 70) g = 'B';
        else if(avg < 70 && avg >= 60) g = 'C';
        else if(avg < 60 && avg >= 50) g = 'D';
        else if(avg < 50 && avg >= 40) g = 'E';
        else g = 'F';
    }
public:
    void read() {
        cout  << "Enter id: ";
        cin >> id;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        for(i = 0; i < 5; i++) {
            cout << "Marks in " << sname[i] << ": ";
            cin >> marks[i];
        }
        calc();
    }
    void write() {
        cout.width(3);
        cout << left << id;
        cout.width(11);
        cout << name;
        cout.width(4);
        cout << age;
        for(i = 0; i < 5; i++) {
            cout.width(7);
            cout << marks[i] << " ";
        }
        cout.width(7);
        cout << total;
        cout.width(9);
        cout << avg << " ";
        cout.width(6);
        cout << g << endl;
    }
};

void tableHead() {
    int i;
    cout << endl<<endl;
    cout.width(3);
    cout << left << "ID ";
    cout.width(11);
    cout << "Name";
    cout.width(4);
    cout << "AGE";
    for(i = 0; i < 5; i++) {
        cout.width(7);
        cout << sname[i] << " ";
    }
    cout.width(7);
    cout << "Total ";
    cout.width(9);
    cout << "Average ";
    cout.width(6);
    cout << "Grade ";
    cout << endl << "----------------------------------------------------------------\n";
    
}

int main() {
    int i, n;
    student stu[20];
    cout << "Enter total students: ";
    cin >> n;
    for(i = 0; i < 5; i++) {
        cout << "Enter subject name: "; 
        cin >> sname[i];
    }
    for(i = 0; i < n; i++) {
        stu[i].read();
    }
    tableHead();
    for(i = 0; i < n; i++) {
        stu[i].write();
    }
    return 0;
}