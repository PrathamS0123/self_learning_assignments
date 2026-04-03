#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Int sum: " << add(3, 4) << endl;
    cout << "Double sum: " << add(3.5, 4.2) << endl;
    return 0;
}