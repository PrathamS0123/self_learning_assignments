#include <iostream>
using namespace std;
class Count
{
	
	int count=0;

	
	public:
		
		void find() {
			
			long long arr;	
			cin>>arr;
			
			long long temp=arr;

			
			while(temp!=0)
			{
				temp = temp/10;
				count++;
			}
		}
		
		void display(){
			cout<<"Num of Digits: "<<count;
		}
};
int main(){
	
	

	Count c1;
	c1.find();
	c1.display();
	
}
