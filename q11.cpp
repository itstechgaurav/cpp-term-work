#include<iostream>

using namespace std;

class fclass;

class base {
    float a,b;
    friend class fclass;
};

class fclass {
public:
    void rec(base &ob) {
        cout << "Enter width and height of rec: ";
        cin >> ob.a >> ob.b;
        cout << "AREA = " << ob.a * ob.b << endl;
    }
    void sqr(base &ob) {
        cout << "Enter s side of square: ";
        cin >> ob.a;
        cout << "AREA = " << ob.a * ob.a << endl;
    }
};

int main() {
    base bs;
    fclass fob;
    fob.rec(bs);
    fob.sqr(bs);
    return 1;
}

