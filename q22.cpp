#include<iostream>

using namespace std;

int a = 1;

class dynamic {
    int i;
public: 
    dynamic() {
        i = a++;
        cout << "Created object: " << i << endl;
    }
    ~dynamic() {
        cout << "Deleted object: " << i << endl;
    }

};

int main() {
    dynamic *dynm = new dynamic[10];
    delete []dynm;
    return 0;
}
