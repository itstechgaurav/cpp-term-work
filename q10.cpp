#include<iostream>
#include<string.h>

using namespace std;

class family {
    char name[20], fname[20], mname[20], gender[10];
    int a;
    friend void enterData(family &fm);
    friend void compareAndPrint(family, family);
};

void enterData(family &fm) {
    cout << "Enter name: ";
    cin >> fm.name;
    cout << "Enter father name: ";
    cin >> fm.fname;
    cout << "Enter mother name: ";
    cin >> fm.mname;
    cout << "Enter gender(male or female): ";
    cin >> fm.gender;
}

void compareAndPrint(family fam1, family fam2) {
    cout << "Family ----- 1\n";
    cout << "Name: " << fam1.name << endl;
    cout << "Father name: " << fam1.fname << endl;
    cout << "Mother name: " << fam1.mname << endl;
    cout << "Gender: " << fam1.gender << endl;
    cout << "Family ----- 2\n";
    cout << "Name: " << fam2.name << endl;
    cout << "Father name: " << fam2.fname << endl;
    cout << "Mother name: " << fam2.mname << endl;
    cout << "Gender: " << fam2.gender << endl;
    if((string)fam1.fname == (string)fam2.fname && (string)fam1.mname == (string)fam2.mname) {
        cout << "Both families belong to each other\n";
        cout << fam1.name << " is " << ((string)fam1.gender == "male" ? "Brother" : "Sister") << " of " << fam2.name << endl;
        cout << fam2.name << " is " << ((string)fam2.gender == "male" ? "Brother" : "Sister") << " of " << fam1.name << endl;
    }
}

int main() {
    family fm1, fm2;
    cout << "Enter family 1 details\n";
    enterData(fm1);
    cout << "Enter family 2 details\n";
    enterData(fm2);
    compareAndPrint(fm1, fm2);
}