#include <iostream>
using namespace std;

class Person {
public:
    void show() {
        cout << "I am a person\n";
    }
};

class Teacher : public Person {};
class Student : public Person {};

class Assistant : public Teacher, public Student {};

int main() {
    Assistant a;

    a.Teacher::show();   // from Teacher side
    a.Student::show();   // from Student side
   return 0;
}