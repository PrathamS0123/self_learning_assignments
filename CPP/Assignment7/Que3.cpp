// Q.3. WAP for Decimal to Binary Conversion. Create a class DecimalToBinary and functions
// to
// 1. Convert decimal number to binary.
// 2. Display binary equivalent


#include <iostream>
using namespace std;
class DecimalToBinary
{

    int num;
    int bin[31];
    int len = sizeof(bin) / sizeof(bin[0]);
    int i = 0;

public:
    void input()
    {
        // cout << "length of the bin is " << len << "\n";
        cout << "Enter the number to find binary :" << "\n";
        cin >> num;
    }

    void findbinary()
    {
        while (num > 0)
        {
            bin[i] = num % 2;
            num = num / 2;
            i++;
        }
    }

    void display()
    {
        for (int j = i - 1; j >= 0; j--)
        {
            cout << "Binary converstion of given number is : " << bin[j] << "\t";
        }
    }
};
int main()
{
    DecimalToBinary D;
    D.input();
    D.findbinary();
    D.display();
    return 0;
}