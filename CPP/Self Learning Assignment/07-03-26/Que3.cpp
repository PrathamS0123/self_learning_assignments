#include<iostream>
using namespace std;

void swap(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;

}
int main()
{
    int a=1;
    int b=2;
    int *p=&a;
    int *q=&b;

    cout<<"value before swap "<<endl;
    cout<<"a: "<<a<<"b: "<<b<<endl;
    swap(p,q);

    cout<<"value after swap "<<endl;
    cout<<"a: "<<a<<"b: "<<b<<endl;
    return 0;
    
}