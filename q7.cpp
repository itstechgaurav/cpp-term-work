#include<iostream>

using namespace std;

class SI {
    float p,r,t,rs;
public:
    SI(float a, float b, float c) {
        p = a,r = b,t = c,rs = 0;
    }
    SI(const SI &ob) {
        p = ob.p,r = ob.r,t = ob.t,rs = ob.rs;
    }
    void calculate_si() {
        rs = (p*r*t)/100.0f;
    }
    void display_si() {
        cout << "Principle: " << p << endl;
        cout << "Rate:      " << r << endl;
        cout << "time:      " << t << "years" <<  endl;
        cout << "SI:        " << rs << endl;
    }
};

int main() {
    SI s1(10000, 5, 1), s2(s1);
    s2.calculate_si();
    s2.display_si();
    return 0;
}