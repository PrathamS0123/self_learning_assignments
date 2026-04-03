#include <iostream>
using namespace std;

//  String Length
int strLength(char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}
//  String Copy
void strCopy(char *src, char *dest) {
    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

//  String Compare
int strCompare(char *s1, char *s2) {
    while (*s1 && *s2) {
        if (*s1 != *s2)
            return 0;   // not equal
        s1++;
        s2++;
    }
    return (*s1 == *s2); // equal if both end together
}

//  String Concatenate
void strConcat(char *s1, char *s2) {
    // move to end of first string
    while (*s1 != '\0') {
        s1++;
    }

    // append second string
    while (*s2 != '\0') {
        *s1 = *s2;
        s1++;
        s2++;
    }

    *s1 = '\0';
}

int main() {
    // dynamic allocation
    char *str1 = new char[100];
    char *str2 = new char[100];
    char *copy = new char[100];

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    // Length
    cout << "Length of first string: " << strLength(str1) << endl;

    // Copy
    strCopy(str1, copy);
    cout << "Copied string: " << copy << endl;

    // Compare
    if (strCompare(str1, str2))
        cout << "Strings are equal\n";
    else
        cout << "Strings are not equal\n";

    // Concatenate
    strConcat(str1, str2);
    cout << "Concatenated string: " << str1 << endl;

    // delete (important)
    delete[] str1;
    delete[] str2;
    delete[] copy;

    return 0;
}