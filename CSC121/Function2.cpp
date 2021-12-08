//one way communication input only
//Scope of a variable
//Local or Global
#include <iostream>
#include <string>
using namespace std;
/*This is void function with a single string parameter. */

void Header(string);//function PROTOTYPE with a string parameter

int x = 25;//global

int main()//tester/driver
{	//argument	Actual parameter ---> #1 #2 #3 #4
														//pow(2,3) pow(x,y) pow(x, (x+1))
	//Header("\nThis value is passed to the function\n"); //#1 function call with literal value or constant
	string title = "\nNOW This value is passed to the function\n";//title is only avaiable in main LOCAL
	//cout << title << endl;//Printing value of title before function call
	//Header(title);//argument passed to the void function -- ACTUAL Parameter #2 VARIABLE
	//#3 sample(x+3-y) INPUT VALUE CAN BE EXPRESSION
	Header(title.substr(7, (x - 15))); //#4 FUNCTION CALL
	cout << x << endl;
	return 0;
}
/*function header must watch the prototype, but includes the name of the parameter.
This parameter is called FORMAL parameter. */
void Header(string T) //parameter	Formal parameter--->Variable
{
	cout << T << endl;
	x = x * 2;
	cout << x << endl;
}