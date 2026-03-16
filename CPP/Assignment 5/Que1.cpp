
#include<iostream>
using namespace std;

class Analyzer
{
	int len;
	int * ptr;
	
public:
Analyzer()
{
	cout<<"Enter no. of elements :";
	cin>>len;
	ptr = new int[len];
}

void setArray()
{
	cout<<"Enter number in array:";
	for(int i=0;i<len;i++)
	{
		cin>>ptr[i];
	}
}

void maximum()
{
	int n = ptr[0];
	
	for (int i=0 ; i<len ; i++)
	{
		if(ptr[i]>n)
		{
			n = ptr[i];
			cout<<"value in n :"<<n<<endl;
		}
	}
	cout<<"Maximum number in array :"<<n<<"\n";
}

void minimum()
{
	int n = ptr[0];
	
	for (int i=0 ; i<len ; i++)
	{
		if(ptr[i]<n)
		{
			n = ptr[i];
		}
	}
	cout<<"Minimum number in array :"<<n<<"\n";
}

void average()
{
	int n = 0;
	for (int i=0 ; i<len ; i++)
	{
		n = n+ptr[i];
	}
	
	n=n/len;	
	cout<<"Average :"<<n;
}
};

int main()
{
	Analyzer a1;
	a1.setArray();
	a1.maximum();
	a1.minimum();
	a1.average();
}
