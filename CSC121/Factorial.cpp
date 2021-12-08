//Factorial of a number
#include <iostream>
using namespace std;
int main() 
{
	int num, fact = 1;
	cout << "Please enter the number for the factorial ";
	cin >> num;
	/*for (int i = 1; i <= num; i++)//incrementing for loop
	{
		fact = fact * i;//1,2,6,24,120
		cout << "intermediate values are " << fact << endl;
	}*/

	for (int i = num; i > 1; i--)
	{
		fact *= i;
	}
	cout << "The factorial of " << num << " is " << fact << endl;

	return 0;
}