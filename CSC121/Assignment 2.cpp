/*
//Exercise 1
//Write a program that inputs two numbers and determines which of the two numbers is the smallest. If
//the numbers are equal, display a message that they are equal.
#include <iostream>
using namespace std;

int main() {
	int num1{ 0 };
	int num2{ 0 };

	cout << "\tPlease enter a numeric value: ";
	cin >> num1;

	cout << "\tPlease enter a numeric value: ";
	cin >> num2;


	if (num1 < num2) 
		cout << "\n\tThe smallest number is: " << num1 << "\n";
	else if (num2 < num1) 
		cout << "\n\tThe smallest number is: " << num2 << "\n";
	else
		cout << "\n\tThey are equal.\n";

}*/


/*
//Exercise 2
// program that inputs the amount of the purchase and calculates the shipping charge 
#include <iostream>
using namespace std;

int main() {
	double shippingCharge{ 0.0 };

	cout << "\tEnter a purchase amount to find out your shipping charges.";
	cout << "\tPlease enter the amount of your purchase: ";
	cin >> shippingCharge;

	if (shippingCharge > 5000.00)
		cout << "\tThe shipping charge on a purchase of $" << shippingCharge << " is $20.00" << endl;
	else if (shippingCharge > 1000.00)
		cout << "\tThe shipping charge on a purchase of $" << shippingCharge << " is $15.00" << endl;
	else if (shippingCharge > 500.00)
		cout << "The shipping charge on a purchase of $" << shippingCharge << " is $10.00" << endl;
	else if (shippingCharge > 250.00)
		cout << "\tThe shipping charge on a purchase of $" << shippingCharge << " is $8.00" << endl;
	else if (shippingCharge > 0.00)
		cout << "\tThe shipping charge on a purchase of $" << shippingCharge << " is $5.00" << endl;
	else
		cout << "\tThe shipping charge on a purchase of $" << shippingCharge << " is $0.00" << endl;

}*/

/*
//Exercise 3
//Letter grade 
#include <iostream>
#include <string>
using namespace std;

int main() {
	string letterGrade;

	cout << "\tEnter a letter grade: ";
	cin >> letterGrade;

	if (letterGrade == "A+")
		cout << "\tThe numberic value is 4.0" << endl;
	else if (letterGrade == "A-")
		cout << "\tThe numberic value is 3.7" << endl;
	else if (letterGrade == "B+")
		cout << "\tThe numberic value is 3.3" << endl;
	else if (letterGrade == "B")
		cout << "\tThe numeric value is 3.0" << endl;
	else if (letterGrade == "B-")
		cout << "\tThe numberic value is 2.7" << endl;
	else if (letterGrade == "C+")
		cout << "\tThe numberic value is 2.3" << endl;
	else if (letterGrade == "C")
		cout << "\tThe numberic value is 2.0" << endl;
	else if (letterGrade == "C-")
		cout << "\tThe numeric value is 1.7" << endl;
	else if (letterGrade == "D+")
		cout << "\tThe numberic value is 1.3" << endl;
	else if (letterGrade == "D")
		cout << "\tThe numeric value is 1.0" << endl;
	else if (letterGrade == "D-")
		cout << "\tThe numberic value is 0.7" << endl;
	else
		cout << "\tError, Incorrect input." << endl;
}*/