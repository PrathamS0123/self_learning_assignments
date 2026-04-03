#include <iostream>
#include <stdexcept>
using namespace std;

int divide(int a, int b) {
    if (b == 0) throw runtime_error("Division by zero error!");
    return a / b;
}

int main() {
    try {
        cout << divide(10, 0) << endl;
    } catch (const exception &e) {
        cerr << "Exception caught: " << e.what() << endl;
    }
    return 0;
}