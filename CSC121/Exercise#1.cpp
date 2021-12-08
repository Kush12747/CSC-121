//Exercise 1
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double weeklySales{ 0.0 }, grossPay{ 0.0 }, federalTax{ 0.0 }, socialSecurity{ 0.0 }, retirement{ 0.0 }, totalDeduction{ 0.0 }, takeHomePay{ 0.0 };

	//prompt the user
	cout << "\tEnter Weekly Sales: ";
	cin >> weeklySales;

	//Calculations
	grossPay = weeklySales * .08;
	federalTax = grossPay * .16;
	socialSecurity = grossPay * .06;
	retirement = grossPay * .08;
	totalDeduction = federalTax + socialSecurity + retirement;
	takeHomePay = grossPay - totalDeduction;

	//Display the output.
	cout << fixed << showpoint << setprecision(2);
	cout << "\n\tTotal Sales:\t\t\t $" << weeklySales << endl;
	cout << "\tGross Pay (8%):\t\t\t $" << grossPay << endl;
	cout << "\tFederal tax paid:\t\t $" << federalTax << endl;
	cout << "\tSocial srcurity paid:\t\t $" << socialSecurity << endl;
	cout << "\tRetirement contribution:\t $" << retirement << endl;
	cout << "\tTotal deductions:\t\t $" << totalDeduction << endl;
	cout << "\tTake home pay:\t\t\t $" << takeHomePay << endl;

	return 0;
}