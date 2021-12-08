#include <iostream>
#include <vector>
using namespace std;

int main()
{
	const size_t SIZE = 20;//vector limit
	vector<int> numbers;//empty vector
	size_t subscript = 0;
	bool duplicate = false;
	unsigned int i = 0;

	while (i <= SIZE) {
		duplicate = false;
		int response = 0;
		cout << "Enter an integer: ";
		cin >> response;

		if (response >= 10 && response <= 100)
		{
			for (unsigned int j = 0; j < numbers.size(); ++j)
			{
				if (response == numbers[j])
				{
					duplicate = true;
					break;
				}
			}
			if (!duplicate)
			{
				numbers.push_back(response);
				++subscript;
			}
			++i;
		}
	}
	cout << "\nUnique values in the vector are:\n";
	for (size_t index = 0; index < subscript; ++index)
		cout << numbers[index] << ", ";
	cout << endl << endl;
}