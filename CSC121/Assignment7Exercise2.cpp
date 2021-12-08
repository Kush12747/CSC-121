
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double SalaryRange[20] = {0};
	double salary, grossSales = 1;
	int index;
	while (grossSales != -1) {
		cout << "Enter gross Sales for salesperson ";
		cin >> grossSales;

		if (grossSales == -1)
			cout << endl << endl;

		salary = 200 + ((grossSales * 9) / 100);
		index = (salary / 100) - 2;

		cout << "Count of employees in each salary range:\n";

		if (salary > 1000)
			SalaryRange[8] = SalaryRange[8] + 1;
		else
			SalaryRange[index] = SalaryRange[index] + 1;
	}

	//cout << "The number of salespeople earning in range " << "$" << salary << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << "\n$" << i * 100 + 200 << "-$" << i * 100 + 299 << ": " << SalaryRange[i];
	}

	if (SalaryRange[8])
	{
		cout << "\nOver $1000: " << SalaryRange[8];
	}

	cout << endl;


	return 0;

}