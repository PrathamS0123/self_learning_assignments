#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter how many array elements you want ";
    cin>>n;
     
    int array[n];
    cout<<"Enter array elments ";
    for (int i=0;i<n;i++)
    {
        cin>>array[i];  // for taking input
    }

cout<<"The reverse array of your element ";
    for (int i=n-1; i>0; i--)
    {
        cout<<array[i]<<" ";

    }
return 0;
}