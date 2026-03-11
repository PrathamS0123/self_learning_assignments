#include <iostream>
using namespace std;

class student
{
    int rollno;
    string name;
    
    int day,month,year;
    int totalmarks;
    public:
    student() // no-argument constructor
    {
        rollno=0;
        name="";
        day=0;
        month=0;
        year=0;
        totalmarks=0;
    }

    student (int r,string n, int d, int m, int y,int tmarks) // parameterized constructor
    {
        rollno=r;
        name=n;
        day=d;
        month=m;
        year=y;
        totalmarks=tmarks;
    }
    void display()
    {
        cout<<"Roll no : "<<rollno<<endl;
        cout<<"Name is : "<<name<<endl;
        cout<<"Date of Birth is : "<<day<<"/"<<month<<"/"<<year<<endl;
        cout<<"Total marks is : "<<totalmarks<<endl;

    }
};
int main()
{
    student s1(1,"john",15,8,2000,85);
    s1.display();
    student s2(2,"vikrant",21,7,2020,91);
    s2.display();
    student s3(3,"Shubham",4,9,2021,52);
    s3.display();
    student s4(4,"Kamlesh",3,5,2026,89);
    s4.display();
    student s5(5,"Pranav",1,7,2025,58);
    s5.display();
    student s6(6,"Rahul",5,12,2024,61);
    s6.display();
    student s7(7,"Ramesh",4,11,2023,52);
    s7.display();
    student s8(8,"Suresh",25,10,2004,63);
    s8.display();
    student s9(9,"Neha",21,9,2002,78);
    s9.display();
    student s10(10,"Priya",24,6,2001,45);
    s10.display();
    student s11(11,"Aarti",21,3,2001,35);
    s11.display();
    

}

