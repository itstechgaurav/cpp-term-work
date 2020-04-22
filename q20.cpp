#include<iostream>

using namespace std;

template <typename M>

void swap(M *a, M *b) {
    M c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int a = 4, b = 5;
    float c = 1.3, d = 9.2;
    char e = 'a', f = 'g';

    cout  << "Before swap ----- " << endl;
    cout << "A = " << a << ", B = " << b << endl;
    cout  << "After swap ----- " << endl;
    swap(&a, &b);
    cout << "A = " << a << ", B = " << b << endl;

    cout  << "Before swap ----- " << endl;
    cout << "C = " << c << ", D = " << d << endl;
    cout  << "After swap ----- " << endl;
    swap(&c, &d);
    cout << "C = " << c << ", D = " << d << endl;

    cout  << "Before swap ----- " << endl;
    cout << "E = " << e << ", F = " << f << endl;
    cout  << "After swap ----- " << endl;
    swap(&e, &f);
    cout << "E = " << e << ", F = " << f << endl;
    return 1;
}