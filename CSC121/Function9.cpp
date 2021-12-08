//F9 --> recursion: when a factor calls himself
#include <iostream>
using namespace std;//Recursion
/*This is an example of recursive function calls. A function calls or invokes itself
again and again. There must be some way to stop or end this. That is called its base
case. A point where it no longer can call itself and has to stop, returning a value.
call is conplete with the last value returned.*/

int RecurFactor(int);

int main()
{
	cout << RecurFactor(5) << endl;
	return 0;
}//end of main function

int RecurFactor(int num)
{
	int fact;
	if (num <= 1) //base case
		return 1;
	fact = num * RecurFactor(num - 1);// 5 * 24
	return fact;			   //  4 * 6
								// 3 * 2
}								// 2 * 1