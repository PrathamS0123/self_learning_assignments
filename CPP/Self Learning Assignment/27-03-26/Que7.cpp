#include <iostream>
using namespace std;


class Printer {
public:
    virtual void print() = 0;   // pure virtual function
};


class ImpactPrinter : public Printer {
public:
    void print() {
        cout << "Printing using Impact Printer\n";
    }
};


class NonImpactPrinter : public Printer {
public:
    void print() {
        cout << "Printing using Non-Impact Printer\n";
    }
};


class DotMatrix : public ImpactPrinter {
public:
    void print() {
        cout << "Dot Matrix Printer printing...\n";
    }
};

class Laser : public NonImpactPrinter {
public:
    void print() {
        cout << "Laser Printer printing...\n";
    }
};


int main() {
    Printer *ptr;

    DotMatrix d;
    Laser l;

    // Runtime polymorphism
    ptr = &d;
    ptr->print();

    ptr = &l;
    ptr->print();

    return 0;
}