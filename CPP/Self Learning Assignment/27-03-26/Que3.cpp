//3. Write a program to implement inner class in C++
#include <iostream>
using namespace std;

class Outer{
  public:
  int x;
  
  Outer(){
    cout <<"Outer class constructor is called!!" <<"\n";
  }


  class Inner{
    public:
    int x;
    Inner(){
      cout << "Inner class constructor is called!!" << "\n";
    }

    ~Inner(){
      cout << "Inner class destructor is called!!!"<< "\n";
    }
  };
   ~Outer(){
    cout <<"Outer class destructor is called!!" << "\n";
  }
};

int main(){
  Outer::Inner i;
  Outer O;

  return 0;
}
