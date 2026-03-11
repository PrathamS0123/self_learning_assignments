#include<iostream>
using namespace std;

class Book
{
	int bookId;
	string title;
	string author; 
    int	price;
	
	public:
	
	void input()
	{
		cout<<"Enter BookID , Title ,Author & Price"<<"\n";
		
		cin>>bookId>>title>>author>>price;
	}
	void display()
	{
		cout<<"Display Book Details"<<"\n";
		
		 cout<<"bookID :"<<bookId<<"\n"<<"Title :"<<title<<"\n"<<"author :"<<author<<"\n"<<"Price :"<<price<<"\n";
	}
	
};

int main()
{
    Book b[4];
    
    cout<<"Enter Book Details :";
    
    for(int i =0 ; i<4 ; i++)
    {
        b[i].input();
    }
    
    cout<<"Display Book Details :";
    for(int i =0 ; i<4 ; i++)
    {
        b[i].display();
    }
}
