// Program to calculate the sum of n natural numbers using default constructor
#include <iostream>
using namespace std;

class NaturalNumberSum {
    private:
        int n;
    public:
        // Default constructor
        // Function to set the value of n
        NaturalNumberSum() {
            cout << "Enter the value of n: ";
            cin >> n;
        }
        // Function to calculate sum of first n natural numbers
        int calculateSum() {
            return (n * (n + 1)) / 2;
        }

        // Function to display the result
        void displayresult() {
            cout << "Sum of first " << n << " natural numbers is: " << calculateSum();
        }
};

int main() {
    NaturalNumberSum sum;
    sum.displayresult();
    return 0;
}
