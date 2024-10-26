#include <iostream>
using namespace std;

class Student {
    public:
        int num1, num2;

        Student(int n1, int n2) {
            num1 = n1;
            num2 = n2;
        }

        inline int sum() { return num1 + num2; }

        void displaySum() {
            cout << "Sum of " << num1 << " and " << num2 << " is " << sum() << endl;
}
};

int main() {
    Student s(10, 20);
    s.displaySum();
    return 0;
}
