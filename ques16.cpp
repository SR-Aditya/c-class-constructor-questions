#include <iostream>
using namespace std;

class Swapnumbers {
    private:
        int num1, num2;

    public:
        Swapnumbers(int n1, int n2) {
            num1 = n1;
            num2 = n2;
        }

        void swap() {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }

        void dis() {
            cout << "Number 1: " << num1 << endl;
            cout << "Number 2: " << num2 << endl;
        }
};

int main() {
    Swapnumbers s(10, 20);
    cout << "Before swapping:" << endl;
    s.dis();
    s.swap();
    cout << "After swapping:" << endl;
    s.dis();
    return 0;
}