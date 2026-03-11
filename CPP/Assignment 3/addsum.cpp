#include <iostream>
using namespace std;

void add(int a=10, int b=20);

int main()
{
 add();
 add(50);
 add(40,60);
};
void add(int a,int b)
{
    cout<<a+b<<endl;
}
