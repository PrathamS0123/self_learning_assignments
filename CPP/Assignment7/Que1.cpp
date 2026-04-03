#include <iostream>
using namespace std;
class SortArray
{
    // int n;
    int array[10];
    int len = sizeof(array) / sizeof(array[0]);
    int option;

public:
    void input()
    {
        // cout << sizeof(array[]);
        // cout << len << "\n";
        cout << "Enter 10 elements in array : " << "\n";
        for (int i = 0; i < len; i++)
        {
            cin >> array[i];
        }
        cout << "Value of elements in array : " << "\n";
        for (int i = 0; i < len; i++)
        {
            cout << array[i] << "\t";
        }
        cout << "\n";
    }

    void sortedArray()
    {
        // int largest = array[0];

        for (int i = 0; i < len ; i++)
        {
            for (int j = i + 1; j < len; j++)
            {
                if (array[j] < array[i])
                {
                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
         cout << "\n";
    }

    void display()
    {
        cout << "Sorted Array : " << "\n";
        for (int i = 0; i < len; i++)
        {
            cout << array[i] << "\t";
        }
        cout << "\n";
    }
};
int main()
{
    SortArray S;
    S.input();
    S.sortedArray();
    S.display();
    return 0;
}