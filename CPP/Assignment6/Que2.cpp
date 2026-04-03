#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {10, 4, 8, 20, 15};

    int largest = arr[0];
    int secondLargest = -1;

    // Find largest number
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Find second largest number
    for (int i = 0; i < n; i++) {
        if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Second Largest: " << secondLargest;

    return 0;
}