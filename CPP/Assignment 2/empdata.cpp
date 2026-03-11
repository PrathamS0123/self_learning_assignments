#include <iostream>
using namespace std;

class Employee
{
    int empId;
    string name;
    float salary;
    string companyName;

    static int totalEmployees;

public:

                                                                // Constructor
    Employee(int id, string n, float s, string c)
    {
        empId = id;
        name = n;
        salary = s;
        companyName = c;

        totalEmployees++;
    }

    void display()
    {
        cout<<"Employee ID : "<<empId<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Salary : "<<salary<<endl;
        cout<<"Company Name : "<<companyName<<endl;
        cout<<"----------------------"<<endl;
    }

    static void showTotalEmployees()
    {
        cout<<"Total Employees : "<<totalEmployees<<endl;
    }
};

int Employee::totalEmployees = 0;

int main()
{
    Employee e1(101,"Vikrant",50000,"TCS");
    Employee e2(102,"Rahul",45000,"Infosys");
    Employee e3(103,"Neha",52000,"Wipro");
    Employee e4(104,"Amit",48000,"Accenture");
    Employee e5(105,"Priya",47000,"Capgemini");
    Employee e6(106,"Sonal",53000,"HCL");

    e1.display();
    e2.display();
    e3.display();
    e4.display();
    e5.display();
    e6.display();

    Employee::showTotalEmployees();

    return 0;
}