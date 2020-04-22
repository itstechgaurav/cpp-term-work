#include<iostream>
#include<math.h>

using namespace std;

class triangle {
    float a,b,c;
    int ch;
public:
    triangle() {
        getCh();
        switch (ch)
        {
        case 1:
            cout << "Enter one side of triangle: ";
            cin >> a;
            area(a);
            break;
        case 2:
            cout << "Enter base, height of triangle: ";
            cin >> a >> b;
            area(a, b);
            break;
        case 3:
            cout << "Enter three side of triangle: ";
            cin >> a >> b >> c;
            area(a,b,c);
            break;
        default:
            cout << "Wrong choice, try again";
            break;
        }
    }
    void area(float a) {
        cout << "Area: " << (sqrtf(3) / 4) * (a*a);
    }
    void area(float a,float b) {
        cout << "Area: " << (a * b) / 2;
    }
    void area(float a, float b, float c) {
        cout << "Area: " << (a+b+c) / 2;
    }
    void getCh() {
        cout << "1: Equilateral triangle\n";
        cout << "2: Scalene triangle\n";
        cout << "3: Right angled triangle\n";
        cout << "Your choice:: ";
        cin >> ch;
    }
};

int main() {
    triangle tr;
    return 0;
}