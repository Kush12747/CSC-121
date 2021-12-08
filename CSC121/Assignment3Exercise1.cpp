//Write a program that asks the user for a year and computes whether that year is a leap year.
#include <iostream>
using namespace std;

#include<iostream>
using namespace std;

int main() {
    int year{ 0 };

    cout << "\tPlease enter a year: ";
    cin >> year;

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        cout << "\t" << year << " is a leap year." << endl;
    }
    else {
        cout << "\t" << year << " is not a leap year." << endl;
    }
}