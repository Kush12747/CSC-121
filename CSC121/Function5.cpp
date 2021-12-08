//PASS BY VALUE
#include <iostream>
using namespace std;
/*This is a value funtion with 2 parameters. The function returns an intger
value which is the product of the 2 numbers passed*/

int product(int, int);

int main() 
{
	int Num1, Num2;//are local variables to main
	cout << "Please enter the first number: ";
	cin >> Num1;//5
	cout << "Please enter the second number: ";
	cin >> Num2;//6
	cout << Num1 << "\t" << Num2 << endl;//before call
	//5		6
	/*In the following function call Num1 and Num2 are ACTUAL parameters passed as
	variables using PASS BY VALUE method*/
	cout << "The product is " << product(Num1, Num2) << endl;

	cout << Num1 << "\t" << Num2 << endl;//After call
	//5	6
	return 0;
}
int product(int N1, int N2)
{
	N1 = N1 * 2;//5 * 2
	N2 = N2 * 2;//6 * 2
	return(N1 * N2);//10 * 12
}
