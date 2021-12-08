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