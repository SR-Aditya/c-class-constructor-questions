#include <iostream>
using namespace std;

// Base class A
class A {
public:
    void displayA() {
        cout << "Class A" << endl;
    }
};

// Derived class B
class B : public A {
public:
    void displayB() {
        cout << "Class B" << endl;
    }
};

// Derived class C
class C : public A {
public:
    void displayC() {
        cout << "Class C" << endl;
    }
};

// Derived class D
class D : public A {
public:
    void displayD() {
        cout << "Class D" << endl;
    }
};

// Derived class E
class E : public B {
public:
    void displayE() {
        cout << "Class E" << endl;
    }
};

int main() {
    // Create objects of classes B, C, D, and E
    B b;
    C c;
    D d;
    E e;

    // Call methods of classes B, C, D, and E
    b.displayA();
    b.displayB();

    c.displayA();
    c.displayC();

    d.displayA();
    d.displayD();

    e.displayA();
    e.displayB();
    e.displayE();

    return 0;
}