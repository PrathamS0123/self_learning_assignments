#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a value of a b c "<<endl;
    cin>>a>>b>>c;

    cout<<"Logical operators using ternary operator  if else "<<endl;
    (a==1 && b==2)?cout<<"Used logical && operator\n":
    (a==1 || b==2)?cout<<"Used logical || operator\n"<<endl:
    cout<<"Both Condition not satisfied";
    //Unary operator
    cout<<"unary operator used"<<endl;
    cout<<"a++"<<a++<<endl;
    cout<<"b--"<<b--<<endl;
    cout<<"!c";
    return 0;
    
};