#include<iostream>

using namespace std;

class polygon {
protected:
    float a,b,c;
public:
    virtual void area() {

    }
};

class rect: public polygon {
public:
    void area() {
        cout << "Enter length and Width: ";
        cin >> a >> b;
        cout << "Area: " << a*b << endl;
    }
};

class tria: public polygon {
public:
    void area() {
        cout << "Enter base and height: ";
        cin >> a >> b;
        cout << "Area: " <<  (a*b)/2 << endl;
    }
};

int main() {
    polygon *poly; // base class pointer for run time
    rect rec; // for rectangle
    tria tri; // for triangle
    poly = &rec;
    cout<< "For rectangle --------------\n";
    poly->area();
    cout<< "For triangle --------------\n";
    poly = &tri;
    poly->area();
    return 0;
}