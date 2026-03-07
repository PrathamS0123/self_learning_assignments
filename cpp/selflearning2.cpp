#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    cout<<"swap two integer function using pass by refrence"<<endl;
    int a=1;
    int b=2;

    cout<<"value before swap"<<"a: "<<a<<"b: "<<b<<endl;
    swap(a,b);
    cout<<"value after swap"<<"a: "<<a<<"b: "<<b<<endl;

    return 0;

}