//Example for Sentinel/dummy values
#include <iostream>
using namespace std;

int main() 
{
	int num = 1;
	char again;
	cout << "Please enter Y to continue this program ";//Prime read
	cin >> again; //#1
	while ((again == 'y') || (again == 'Y')) //#2
	{ 
		cout << "The value of number is " << num << endl;
		num++;
		cout << "Do you want to print another number? "; //change in CV #3
		cin >> again;
	} 
	cout << endl;

/*	char gain = 'Y';
	int no = 1;
	//cout << num << "checking" << endl;
	do   // ---> ALWAYS get executed AT LEAST ONCE 
	{ 
		cout << "The number is: " << no << endl;
		no--;
		cout << "Do you want to print another number? ";
		cin >> gain;
	} while (gain == 'Y'); */


	//Get ther average of numbers entered through keyboard and find the large and small values

/*	int smallest = 100, largest = 0, howmany, num, total = 0;
	cout << "How many number would you like to average?";
	cin >> howmany;
	for (int i = 0; i < howmany; i++)//three statements in for, all in one line, PRE-TEST
	{
		cout << "Please enter the number: ";
		cin >> num;
		total = total + num;//continue to add the numbers ACCUMULATOR 85,110,207
		if (num < smallest)//true,true,flase
			smallest = num;//85,25
		if (num > largest)//true,false,true
			largest = num;//85,97
	}//85, 25, 97

	cout << "The largest value is " << largest << endl;
	cout << "The smallest value is " << smallest << endl;
	cout << "The average value is " << (float(total)/float(howmany)) << endl;*/
	
	int smallest = INT_MAX;//initialize to largest value
	int largest = INT_MIN;//initialize to smallest value
	int i = 0, num, total = 0;//total is called ACCUMULATOR
	char more;//control variable
	do
	{
		cout << "Please enter the number: ";
		cin >> num;
		i++; //counter
		total = total + num;//continue to add the numbers ACCUMULATOR
		if (num < smallest)
			smallest = num;
		if (num > largest)
			largest = num;
		cout << "Do you have another number? ";
		cin >> more;
	} while ((more == 'y') || (more == 'Y'));
	cout << "\n\nAverage of the number is: " << float(total) / float(i) << endl;
	cout << "Largest of the numbers is: " << largest << endl;
	cout << "Smaller of the number is: " << smallest << endl;

	return 0;
}