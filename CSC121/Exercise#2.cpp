/*
//Exercise 2
#include <iostream>
using namespace std;

int main() {
	int number{ 0 };

	cout << "Enter an integer: ";
	cin >> number;

	cout << "The digits extracted from integer " << number << " are:" << endl;

	cout << "\t" << number / 10000 << " ";
	number = number % 10000;
	cout << "\t" << number / 1000 << " ";
	number = number % 1000;
	cout << "\t" << number / 100 << " ";
	number = number % 100;
	cout << "\t" << number / 10 << " ";
	number = number % 10;
	cout << "\t" << number << endl;

	return 0;
}
*/



#include <iostream>

using namespace std;

int main()
{

	int time1;
	int time2;
	int differance;
	int differanceMin;
	int differanceHr;
	
	cout << "\tEnter the first time: ";
	cin >> time1;

	cout << "\tEnter the second time: ";
	cin >> time2;

	if (time1 > time2)
		differance = (2000 - time1) - time2;
	else
		differance = time2 - time1;

	differanceMin = differance % 100;
	differanceHr = differance / 100;

	cout << "\tThe Time differnce is " << differanceHr << " hr " << "and " << differanceMin << " minutes" << endl;
	cin;

	return 0;
}