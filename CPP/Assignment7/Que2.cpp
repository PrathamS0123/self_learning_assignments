// Q.2. WAP to find Factorial of a Number. Create class FindFactorial and functions to
// 1. Accept a number from user.
// 2. Calculate factorial using loop.
// 3. Display result.

#include <iostream>
using namespace std;

class Factorial
{
    int fact = 1;
    int num;
    public:
    void input()
    {
        cout << "Enter number to find factorial : " << "\n";
        cin >> num;
    }

    void factorial()
    {
        for (int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
    }

    void display()
    {
        cout << "Factorial of the number is : " << fact << "\n";
    }
};
int main()
{
   Factorial F;
   F.input();
   F.factorial();
   F.display();
    return 0;
}