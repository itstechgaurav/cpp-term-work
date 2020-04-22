#include<iostream>

using namespace std;

class employee {
    int id;
    float da, it, ns, bs, gs;
    char name[10];
public:
    employee() {
        da = 0.52;
        it = 0.3;
    }
    void get_data() {
        cout << "Enter employee id: ";
        cin >> id;
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter basic salary: ";
        cin >> bs;
    }
    void show_data() {
        cout << "\n--------------  Deatils ----------------\n";
        cout << "ID: " << id << endl;
        cout << "name: " << name << endl;
        cout << "basic salray: " << bs << endl;
        cout << "---------------------------------\n";
        cout << "(+) DA (52%): " << bs * da << endl;
        gs = bs + (bs * da);
        ns = gs - (gs * it);
        cout << "---------------------------------\n";
        cout << "Gross salary: " << gs << endl;
        cout << "(-) IT (30%): " << gs * it << endl;
        cout << "---------------------------------\n";
        cout << "Net salary:   " << ns << endl;
        cout << "---------------------------------\n";
    }
};

int main() {
    employee emp;
    emp.get_data();
    emp.show_data();
    return 1;
}