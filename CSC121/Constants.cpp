//Arithmetic operators
//Assignment operator =
//Assignment statement    L.H.S = R.H.S;    LHS is always a variable
// RHS could be a constant/literal, variable, expression
// age = 45; age = x; age = x + 45;
//formatting
//reading input from keyboard/user
#include <iostream>
#include <iomanip>
using namespace std;

//varaible are written in lowercase and constants as uppercase
const float ROI = 3.5;//constant declaration and initialization

int main() 
{
	float amount=0.0, interest=0.0, endofYrBal=0.0;
	cout << "Please enter the amount of CD: ";//Prompt the user
	// >> is call stream EXTRACTING operator
	cin >> amount;//gets the value from the user
	// 3 + 5, 3 * x, x / y
	// +, -, *, /, %
	//(3 + 5 -8 /4)--> operator precedence P MD AS left to right
	interest = amount *(ROI/100);//arithmetic expression
	endofYrBal = amount + interest;

	cout << fixed << showpoint << setprecision(2);//formating for currency

	cout << "At the end of one year the new balance is: " << endofYrBal << endl << endl;
	return 0;
}