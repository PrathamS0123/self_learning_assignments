#include<iostream>
using namespace std;

class Calculator
{
	int num1, num2;
	
	public:
	
	void accept()
	{
		cout<<"Enter a number :";
		cin>>num1>>num2;
	}
	
	void add()
	{
		cout<< num1+num2<<endl;
	}
	
	void subtract()
	{
		cout<< num1-num2<<endl;
	}
	
	void multiply()
	{
		cout<< num1*num2<<endl;
	}
	
	void divide()
	{
		cout<< num1/num2<<endl;
	}
	void square1()
	{
		cout<< num1*num1<<endl;
	}
	void square2()
	{
		cout<< num2*num2<<endl;
	}
	
};

int main()
{
   Calculator c1;
   
   c1.accept();
   
   c1.add();
   c1.subtract();
   c1.multiply();
   c1.divide();
   c1.square1();
   c1.square2();
}