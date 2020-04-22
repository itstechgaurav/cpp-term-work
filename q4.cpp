#include<iostream>

using namespace std;

class spower {
public:
    float pow(float m, int n) {
        return n > 0 ? m * pow(m, n-1) : 1;
    }
    void show(float rs) {
        cout << "pow: " << rs << endl << endl;
    }
};

class power: public spower  {
public:
    float pow(int m, int n) {
        return n > 0 ? m * pow(m, n-1) : 1;
    }
};

int main() {
    spower sob;
    cout << "when float int \n For m=5.5 n=2\n";
    sob.show(sob.pow(5.5, 2));
    power pob;
    cout << "when int int \n For m=5 n=2\n";
    pob.show(pob.pow(5, 2));
    return 0;
}