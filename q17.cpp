#include<iostream>

using namespace std;

class complex {
    int r,i;
public:
    complex() {}
    complex(int a, int b) {
        r = a, i = b;
    }
    friend complex operator+(const complex &, const complex &);
    void show() {
        cout << r << (i < 0 ? " - " : " + ") << (i < 0 ? i*-1 : i*1) << "i" << endl;
    }
};

complex operator+(const complex &ob, const complex &ob2) {
    complex t(ob.r, ob.i);
    t.r+=ob2.r;
    t.i+=ob2.i;
    return t;
}

int main() {
    complex a(4,5), b(6,4),c;
    c = a+b;
    cout << "A: ",a.show();
    cout  << "B: ",b.show();
    cout << "C=(A+B): ",c.show();
}