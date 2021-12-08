//Write a program that converts a positive integer into the Roman number system. The Roman number system has digits
#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    string roman = "";

    cout << "\tEnter the whole number less than 4,000 you wish to convert: ";
    cin >> num;

    if ((num < 1) || (num > 3999)) {
        cout << "\tinvalid number!" << endl;
    }
    else if (num >= 1000) {
       roman += "M";
       num -= 1000;
    }
    else if (num >= 900) {
       roman += "CM";
       num -= 900;
    }
    else if (num >= 500) {
       roman += "D";
       num -= 500;
    }
    else if (num == 400) {
       roman += "CD";
       num -= 400;
    }
    else if (num >= 100) {
       roman += "C";
       num -= 100;
    }
    else if (num >= 90 && num <= 99) {
       roman += "XC";
       num -= 90;
    }
    else if (num >= 50) {
       roman += "L";
       num -= 50;
    }
    else if (num == 40) {
       roman += "XL";
       num -= 40;
    }
    else if (num >= 10) {
       roman += "X";
       num -= 10;
    }
    else if (num == 9) {
       roman += "IX";
       num -= 9;
    }
    else if (num >= 5) {
        roman += "V";
        num -= 5;
    }
    else if (num == 4) {
        roman += "IV";
        num -= 4;
    }
    else if (num >= 1) {
        roman += "I";
        num -= 1;
    }
    cout << "\tThe Roman numeral is " << roman << endl;
}
