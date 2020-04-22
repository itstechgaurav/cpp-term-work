#include<iostream>

using namespace std;

class TIME {
    int h,m,s;
public:
    TIME() {
        h=m=s = 0;
    }
    TIME(int a, int b, int c) {
        h = a, m = b, s = c;
    }
    void add(TIME a, TIME b) {
        h = a.h + b.h;
        m = a.m + b.m;
        s = a.s + b.s;
        m+=s/60;
        h+=m/60;
        m=m%60;
        s=s%60;
    }
    void show() {
        cout << h << ":" << m << ":" << s <<endl;
    }
};

int main() {
    TIME a(4,34,45),b(5,25,50),c;
    c.add(a, b);
    cout << "A:   ", a.show();
    cout << "B:   ", b.show();
    cout<<"----------------"<<endl;
    cout << "A+B: ", c.show();
}