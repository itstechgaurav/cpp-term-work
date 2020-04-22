#include<iostream>

using namespace std;

class Book {
    int pages;
    float price;
    char name[20], SN[10], author[20];
public:
    Book() {
        price = pages = 0;
    }
    void input() {
        cout << "Enter book name: ";
        cin.getline(this->name, sizeof(this->name));
        cout << "Enter serial no: ";
        cin.getline(this->SN, sizeof(this->SN));
        cout << "Enter author: ";
        cin.getline(this->author, sizeof(this->author));
        cout << "Enter no of pages: ";
        cin >> this->pages;
        cout << "Enter book price: ";
        cin >> this->price;
    }
    void ouput() {
        cout << "-------------------------------------\n";
        cout << "Book name: " << this->name << endl;
        cout << "Book author: " << this->author << endl;
        cout << "Book serial no: " << this->SN << endl;
        cout << "Book total pages: " << this->pages << endl;
        cout << "Book price: " << this->price << "rs" << endl;
    }
};

int main() {
    Book b;
    b.input();
    b.ouput();
    return 0;
}