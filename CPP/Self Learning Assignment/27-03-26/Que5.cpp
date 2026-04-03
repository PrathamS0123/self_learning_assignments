#include <iostream>
using namespace std;


class Date {
    int day, month, year;

public:
    // read
    void input() {
        cout << "Enter date (dd mm yyyy): " <<"\n";
        cin >> day >> month >> year;
    }

    // print
    void display() {
        cout << day << "/" << month << "/" << year << endl;
    }

    // add days
    void operate(int d) {
        day += d;

        // simple logic (not full calendar)
        if (day > 30) {
            month += day / 30;
            day = day % 30;
        }
        if (month > 12) {
            year += month / 12;
            month = month % 12;
        }
    }

    // subtract days
    void operate(int d, bool subtract) {
        day -= d;

        if (day <= 0) {
            month--;
            day += 30;
        }
        if (month <= 0) {
            year--;
            month += 12;
        }
    }
};


class Time {
    int hr, min, sec;

public:
    // read
    void input() {
        cout << "Enter time (hh mm ss): ";
        cin >> hr >> min >> sec;
    }

    // print
    void display() {
        cout << hr << ":" << min << ":" << sec << endl;
    }

    // add seconds
    void operate(int s) {
        sec += s;

        if (sec >= 60) {
            min += sec / 60;
            sec = sec % 60;
        }
        if (min >= 60) {
            hr += min / 60;
            min = min % 60;
        }
    }

    // subtract seconds
    void operate(int s, bool subtract) {
        sec -= s;

        if (sec < 0) {
            min--;
            sec += 60;
        }
        if (min < 0) {
            hr--;
            min += 60;
        }
    }
};

int main() {
    Date d;
    Time t;

    d.input();
    t.input();

    cout << "\nOriginal Date: ";
    d.display();

    cout << "Original Time: ";
    t.display();

    // add
    d.operate(5);       // add 5 days
    t.operate(120);     // add 120 seconds

    cout << "\nAfter Addition:\n";
    d.display();
    t.display();

    // subtract
    d.operate(3, true);   // subtract 3 days
    t.operate(50, true);  // subtract 50 sec

    cout << "\nAfter Subtraction:\n";
    d.display();
    t.display();

    return 0;
}