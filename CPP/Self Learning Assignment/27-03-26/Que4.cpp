#include <iostream>
using namespace std;
class ImpactPrinter {
    public:
    void showImpact(){
        cout << "Impact Printer are follows :" << "\n";
        cout << "1.Dot printer" << "\n";
        cout << "2.Line printer " << "\n";
        cout <<  "3.Daisy wheel" << "\n";
    }
};
class NonImpactPrinter{
  public:
  void showNonImpact(){
        cout << "Non Impact Printer are follows :" << "\n";
        cout << "1.Inkjet printer" << "\n";
        cout << "2.Laser printer " << "\n";
        cout << "3.Thermal Printer" << "\n";
  }
};
class Printer : public ImpactPrinter , public NonImpactPrinter{
 private:
 bool isPrinter = false;  
public:
 void showPrinter(){
  cout << "Types of printer :" << "\n";
  cout <<" Imapact Printers" << "\n";
  cout << "NonImpact Printers " << "\n";
 }
 friend void display(Printer P); 

};

void display(Printer P){
    cout << "This is friend function :" <<"\n";
    P.isPrinter = true;
    if(P.isPrinter == true){
        cout << "Printer is Printing";
    }
}


int main(){
    Printer P1;
    P1.showPrinter();
    P1.showImpact();
    P1.showNonImpact();
    display(P1);
    return 0;
}



