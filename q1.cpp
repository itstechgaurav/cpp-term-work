#include<iostream>

using namespace std;

class student {
    char name[10], cname[10];
    int id, age;
public:
    void get_data() {
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter college name: ";
        cin >> cname;
        cout << "Enter age: ";
        cin >> age;
    }

    void show_data() {
        cout << "\n--------------  Deatils ----------------\n";
        cout << "Id: " << id << endl;
        cout << "name: " << name << endl;
        cout << "collage name: " << cname << endl;
        cout << "age: " << age << endl;
    }
};

int main() {
    student stu;
    stu.get_data();
    stu.show_data();
    return 0;
}