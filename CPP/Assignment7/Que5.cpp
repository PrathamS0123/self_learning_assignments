// Q.5. Create a menu driven program for Student Record System. Use map to store rollNo and
// name.
// Menu options:

// 1. Add Record
// 2. Display Records
// 3. Save to File
// 4. Exit


#include <iostream>
#include <map>
#include <fstream>
using namespace std;

class Student
{
    int rollNo;
    string name;
    int option;
    map<int, string> StudentData;

public:
    Student()
    {
        rollNo = 0;
        name = " ";
    }

    void input()
    {
        cout << "Enter roll no of student: " << "\n";
        cin >> rollNo;
        cout << "Enter Name of Student : " << "\n";
        cin >> name;
        cout << "\n";

        StudentData[rollNo] = name;
    }

    void display()
    {
        // cout << "Roll no of Student :" << rollNo << "\n";
        // cout << "Name of student : " << name << "\n";

        for (auto it : StudentData)
        {
            cout << "\n";
            cout << "Roll no :" << it.first << "\n";
            cout << "Name of Student : " << it.second << "\n";
            cout << "\n";
        }
    };

    void writefile()
    {
        // save to file

        ofstream fout("student.txt");

        for (auto it : StudentData)
        {
            fout << "Roll no : " << it.first << "\n";
            fout << "Name :" << it.second << "\n";
        }
        fout.close();
        cout << "Data Saved Successfully!!!"<<"\n";
    }

    void menu()
    {
        while (true)
        {
            cout << "Select correct option :" << "\n";
            cout << "1.Add Record " << "\n";
            cout << "2.Display Records" << "\n";
            cout << "3.Save to File" << "\n";
            cout << "4.Exit" << "\n";
            cout << "\n";
            cin >> option;

            switch (option)
            {
            case 1:
                input();
                break;

            case 2:
                display();

                break;

            case 3:
                writefile();
                break;
            case 4:
                exit(0);
                cout << "Exit Successfully!!!";

            default:
                cout << "Choose Correct Option to proceed :)" << "\n";
                break;
            }
        }
    }
};

int main()
{

    Student S;
    S.menu();

    return 0;
}

