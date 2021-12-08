//one way communication out only VAKUE RETURNING
#include <iostream>
#include <string>
using namespace std;
//This is a value function with no parameter. The function returns a string datatype
string Header();//function prototype with a string data type returned

int main()
{
	//cout << Header() << endl;
	string T = Header();
	cout << T << endl;
	//cout << pow(2,3);
	//Header(); value returning function CANNOT be called on a line by itsself.
	return 0;
}

string Header()//function header
{
	return "\n This is the value returned\n";//returning literal string
}