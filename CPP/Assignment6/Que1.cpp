#include <iostream>
using namespace std;

int main() {
    int N = 15;  // Given input

    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            cout << "FizzBuzz ";
        else if (i % 3 == 0)
            cout << "Fizz ";
        else if (i % 5 == 0)
            cout << "Buzz ";
        else
            cout << i << " ";
    }

    return 0;
}