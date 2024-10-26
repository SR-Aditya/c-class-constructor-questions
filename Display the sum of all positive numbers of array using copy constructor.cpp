#include <iostream>
using namespace std;
class Array {
    int arr[100];
    int size;

public:
    Array(int arr[], int size) {
        this->size = size;
        for (int i = 0; i < size; i++) {
            this->arr[i] = arr[i];
        }
    }

    void displaySum() {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] > 0) {
                sum += arr[i];
            }
        }
        cout << "Sum of all positive numbers: " << sum << endl;
    }
};

int main() {
    int arr[] = {146, -234, 364, -76, 45};
    int size = sizeof(arr) / sizeof(arr[0]);
    Array a(arr, size);
    a.displaySum();
    return 0;
}