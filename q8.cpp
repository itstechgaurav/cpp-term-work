#include<iostream>

using namespace std;

inline float big(int a, int b, int c) {
    int t = a;
    if (b > t) t = b;
    if (c > t) t = c;
    return t;
}

int main() {
    int a,b,c;
    cout  << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "BIG: " << big(a,b,c);
    return 0;
}