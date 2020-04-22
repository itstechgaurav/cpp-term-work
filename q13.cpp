#include<iostream>
using namespace std;
class staticSum {
public:
    static int a, b;
    static int sum() {
        return a+b;
    }
};

int staticSum::a = 0;
int staticSum::b = 0;

int main() {
    cout << "Enter two numbers: ";
    cin >> staticSum::a >> staticSum::b;
    cout << "SUM = " << staticSum::sum();
    return 0;
}