#include<iostream>
using namespace std;
class student {
    protected:
    char name[10], school_name[10], college_name[10];
};
class employee {
    protected:
    char company[10];
    int age;
    public:
        void egData() {
            cout << "Enter company name: ",cin >> company;
            cout << "Enter age: ",cin >> age;
        }
        void esData() {
            cout << "Company Name: " << company << endl;
            cout << "Age: " << age << endl;
        }
};
class manager: private student , private employee {
    char designation[10];
    float salary;
    public: 
        void getData() {
            cout << "Enter name: ",cin >> name;
            egData();
            cout << "Enter Designation: ",cin >> designation;
            cout << "Enter Salary: ",cin >> salary;
        }
        void putData() {
            cout << "Name: " << name << endl;
            esData();
            cout << "Designation: " << designation << endl;
            cout << "Salary: " << salary << endl;
        }
};
int main() {
    manager m;
    m.getData();
    m.putData();
}