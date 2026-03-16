
#include<iostream>
using namespace std;

class Bank{
	
	public:
		int bal=50000;
		int accountNum=100;
		
		void getcheckBal(int a){
			
			if(accountNum==a){
				cout<<bal<<endl;
			}else{
				cout<<"Enter correct account number"<<endl;
			}
		}
		
		void getDeposit(int d, int a1)
		{
				cout<<"enter amount to deposit"<<endl;
				bal = bal +d;
				cout<<bal<<endl;
		}
		
		void getWithdraw(int w, int a2)
		{
				cout<<"enter amount to withdraw"<<endl;
				bal = bal - w;
				cout<<bal<<endl;
		}
		
		
	
};

int main()
{
    Bank b1;

    int k = 1;
    double a,b,c;
    

    while (k!=0)
    {
        a=0;
        b=0;
        c=0;

        
        cout<<"press 0 to exit :"<<endl;
        
        cout<<"press 1 for Check balance :"<<endl;

        cout<<"press 2 for Deposit :"<<endl;

        cout<<"press 3 for Withdraw :"<<endl;

        cin>>k;

        switch (k)
        {
        case 0 :
            break;

        case 1 : 
		int a;
        cout<<"enter account number:"<<endl;
		cin>>a;

        b1.getcheckBal(a);
            break;

        case 2 : 
        int a1;
        cout<<"enter account number:"<<endl;
		cin>>a1;
		
		int d;
		if(b1.accountNum==a1){
			cout<<"Enter amount to deposit :"<<endl;
			
			cin>>d;
		}else
		{
			cout<<"Wrong Acc No."<<endl;
			break;
		}
	
        b1.getDeposit(d,a1);  
            break;

        case 3 : 
        
        int a2;
        cout<<"enter account number:"<<endl;
		cin>>a2;
		
		int w;
		if(b1.accountNum==a2){
			cout<<"Enter amount to withdraw :"<<endl;
			
			cin>>w;
		}else
		{
			cout<<"Wrong Acc No."<<endl;
			break;
		}
		
		b1.getWithdraw(w,a2);    
            break;

        default:
            break;
        }

    }
    


    return 0;
}
