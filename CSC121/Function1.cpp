//no communication just action. function will do something
//Code written to preform a single task in a specific format is called a FUNCTIOn
#include <iostream>
using namespace std;

//This is a void function with no parameters. This function does something inside
//the function body
void Header();//Function prototype/signature

//flow of execution
int main()
{
	Header();//void function can be called on a line by itself. CALL/invocation
	return 0;
}

//Function Definition
void Header()//function header MUST MATCH the prototype
{//function body
	cout << "\nFunction that does something \n" << endl;
}