#include <iostream>
using namespace std;

int main()
{
	int x;
	x = 25;//25
	x = x + 5;//new x = old x + 5  //30
	x++; //x = x + 1; post increment //31
	cout << x << endl; //Guess what prints //31
	cout << x++ << endl; //Guess what prints //32
	cout << ++x << endl; //Guess what prints //33
	cout << --x << endl; //Guess what prints  //pre increment //32
	cout << x-- << endl; //Guess what prints //31
	cout << x << endl; //Guess what prints //31
	x = 100 - x++;// 100-x
	cout << x << endl;
	float y = x / 3.0;//watch out for operand datatypes
	cout << y << endl;
	int i = 3;
	y = float(x) / i;//casting like types
	cout << y << endl;

	return 0;

}

// int float and char --> ACII code