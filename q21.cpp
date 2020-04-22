#include <iostream>
using namespace std;
template<class T>
class BIGGER {
    T arr[10];
    int n,i, big;
public:
    void input() {
        cout << "Enter total length: ";
        cin >> n;
        cout << "Enter " << n << " elements: ";
        for(i = 0; i < n; i++) cin >> arr[i];
    }
    void getBig() {
        big = arr[0];
        for(i = 1; i < n; i++) if(arr[i] > big) big = arr[i];
        cout << "Big: " << big;
    }
};

int main() {
    BIGGER<int> nums;
    nums.input();
    nums.getBig();
    return 0;
}
