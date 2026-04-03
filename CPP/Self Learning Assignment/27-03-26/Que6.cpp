#include <iostream>
using namespace std;

class Vehicle{
    public:
    virtual void VehicleInfo() = 0;
};

class  Car : public Vehicle {
    public:
    void VehicleInfo(){
      cout << "Vehicle Type is Car" << "\n";
      cout << "Car is Running " << "\n";
    }   
};

int main(){
    Car C;
    C.VehicleInfo();
    return 0;
}
