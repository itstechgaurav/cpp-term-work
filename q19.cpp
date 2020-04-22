#include<iostream>

using namespace std;

class partTime {
    protected:
        int wh, wages;
};

class fullTime {
    protected:
        int as, tl;
};

class employee:protected partTime, protected fullTime {
    protected:
        char name[10], dept[20], doj[15];
        int id, exp, ty_speed;
    public:
        void getData() {
            cout << "Id: " << id << endl;
            cout << "name: " << name << endl;
            cout << "DOJ: " << doj << endl;
            cout << "Department: " << dept << endl;
            cout << "Experience: " << exp << endl;
        }
        void setData() {
            cout << "Enter name: ", cin >> name;
            cout << "Enter Id: ",cin >> id;
            cout << "Enter date of joining(dd-mm-yy): ", cin >> doj;
            cout << "Enter department: ", cin >> dept;
            cout << "Enter experience: ", cin >> exp;
        }
        void egetData() {getData();}
        void esetData() {setData();}
};



class clerk: protected employee {
    public:
        void setData() {
            esetData();
            cout << "Enter Typing Speed: ", cin >> ty_speed;
        }
        void getData() {
            egetData();
            cout << "Typing Speed: " << ty_speed << endl;
        }
};

class manager: protected employee {
    public:
        void setData() {
            esetData();
            cout << "Enter Team Size: ", cin >> ty_speed;
        }
        void getData() {
            egetData();
            cout << "Team Size: " << ty_speed << endl;
        }
};

class faculty: protected employee {
    char subject[10], qualification[10];
    int ind_exp, pf;
    public:
        void setData() {
            esetData();
            cout << "Enter faculty subject: ", cin >> subject;
            cout << "Enter faculty qualification: ", cin >> qualification;
            cout << "Enter industry experience: ", cin >> ind_exp;
            while(1) {
                cout << "1: part time\n";
                cout << "2: full time\n";
                cout << "your choice: ";
                cin >> pf;
                if (pf > 0 && pf < 3) break;
                else cout << "\n---Try again---\n";
            }
            if(pf == 1) {
                cout << "Enter working hours: ", cin >> wh;
                cout << "Enter wages: ", cin >> wages;
            } else {
                cout << "Enter no of addition subjects: ", cin >> as;
                cout << "Enter how much teaching load: ", cin >> tl;
            }
        }
        void getData() {
            egetData();
            cout << "faculty subject: " << subject << endl;
            cout << "faculty qualification: " << qualification << endl;
            cout << "facult industry experience: " << ind_exp << endl;
            cout << name << " is " << (pf == 1 ? " Part " : " Full ") << " Time\n";
            if(pf == 1) {
                cout << "Working hours: " << wh << endl;
                cout << "Wages: " << wages << endl;
            } else {
                cout << "No of addition subjects: " << as << endl;
                cout << "Teaching load: " << tl << "%" << endl;
            }
        }
};


int main() {
    employee emp;
    manager mm;
    clerk clk;
    faculty fac;
    cout << "\nEmployee input ----- " << endl;
    emp.setData();
    cout << "\nEmployee output ----- " << endl;
    emp.getData();
    cout << "\nManager input ----- " << endl;
    mm.setData();
    cout << "\nManager output ----- " << endl;
    mm.getData();
    cout << "\nclerk input ----- " << endl;
    clk.setData();
    cout << "\nclerk output ----- " << endl;
    clk.getData();
    cout << "\nFaculty input ----- " << endl;
    fac.setData();
    cout << "\nFaculty output ----- " << endl;
    fac.getData();
}