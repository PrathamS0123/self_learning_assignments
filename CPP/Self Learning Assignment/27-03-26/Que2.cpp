#include <iostream>
using namespace std;

class Person{
  public:
  int x;
  
  Person(){
    cout <<" constructor is called!!" <<"\n";
  }


  
   ~Person(){
    cout <<" destructor is called!!" << "\n";
  }
};

int main(){
  Person P;

  return 0;
}