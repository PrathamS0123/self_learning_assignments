#include <iostream>
using namespace std;
int main(){
	int n =0;
	int n1=1;
	int num;
	
	cout<<"Enter number for fibonacci series :"<<endl;
	cin>>num;
	int sum=0;
	cout<<n<<n1;
	for(int i=1;i<=num;i++){
		sum = n+n1;
		n=n1;
		n1=sum;
		
		
		cout<<sum;
		
	}
	
}