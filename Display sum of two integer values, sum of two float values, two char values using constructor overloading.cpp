#include <iostream>
using namespace std;
class Calculator {
    int a, b;
    float c, d;
    char e, f;

public:
    Calculator(int a, int b) {
        this->a = a;
        this->b = b;
        cout << "Sum of two integer values: " << (a + b) << endl;
    }

    Calculator(float c, float d) {
        this->c = c;
        this->d = d;
        cout << "Sum of two float values: " << (c + d) << endl;
    }

    Calculator(char e, char f) {
        this->e = e;
        this->f = f;
        cout << "Concatenation of two char values: " << e << f << endl;
    }
};

int main() {
    Calculator obj1(10, 20);
    Calculator obj2(10.542f, 20.524f);
    Calculator obj3('K', 'D');
    return 0;
}