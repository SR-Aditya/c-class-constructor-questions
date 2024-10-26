#include <iostream>
using namespace std;

class Base {
protected:
    int num1, num2;
public:
    Base(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }
};

class Derived1 : public Base {
public:
    Derived1(int n1, int n2) : Base(n1, n2) {}
    void displayNum1() {
        cout << "Number 1: " << num1 << endl;
    }
};

class Derived2 : public Base {
public:
    Derived2(int n1, int n2) : Base(n1, n2) {}
    void displayNum2() {
        cout << "Number 2: " << num2 << endl;
    }
};

int main() {
    Derived1 d1(10, 20);
    Derived2 d2(10, 20);
    d1.displayNum1();
    d2.displayNum2();
    return 0;
}
