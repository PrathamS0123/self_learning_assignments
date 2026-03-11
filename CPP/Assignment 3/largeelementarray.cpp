#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "How many number of elements you want to enter: ";
    cin >> n;

    int *arr = new int[n];

    cout << "enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int largest = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "largest element is: " << largest;
    return 0;
}