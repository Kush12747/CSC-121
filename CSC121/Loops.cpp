//Loops
#include <iostream>
using namespace std;

//There are three types of loops, "while", "do-while" and "for"
int main() 
{
	//Print the value of cv 1 of 10
	//#1 i is CONTROL varaiable #2 test #3 change
	for (int i = 1; i <= 10; i++)//is a FIXED, PRE-TEST loop
	{//block of code
		cout << "Value of i is: " << i << endl;
	}
	cout << endl;//break in output


	int j = 0;//#1
	while (j < 10)// is a VARIABLE, PRE-TEST loop #2
	{
		j++;
		cout << "Value of j is: " << j << endl;
		//j++; //#3
	}
	cout << endl;//break in output


	int k = 1;
	do //is VARIABLE, POST-TEST loop
	{
		cout << "Value of k is: " << k << endl;
		k++;
	} while (k <= 10);//don't forget the semicolon after the while and its condition.
	cout << endl;//break in output

	return 0;
}