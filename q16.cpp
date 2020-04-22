#include<iostream>

using namespace std;

class TIME {
    int h,m,s;
public:
    TIME(int a, int b, int c) {
        h = a, m = b, s = c;
    }
    void operator++() {
        h++;
    }
    void operator--() {
        h--;
    }
    void show() {
        cout << h << ":" << m << ":" << s <<endl;
    }
};

int main() {
    TIME t(4,59,58);
    cout << "TIME: ", t.show();
    ++t;
    cout << "INC: ", t.show();
    ++t;
    cout << "INC: ", t.show();
    --t;
    cout << "DEC: ", t.show();
}