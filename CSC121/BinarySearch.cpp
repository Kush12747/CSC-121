#include <iostream>
using namespace std;
const int ARRAY_SIZE = 10;
int binarySearch(const int[], int, int);
void bubbleSort(int[], int);

int main() {
	int index, number, intList[ARRAY_SIZE];
	cout << "Enter " << ARRAY_SIZE << " Integers." << endl;
	for (index = 0; index < ARRAY_SIZE; index++)
		cin >> intList[index];
	cout << endl;

	//sort the list
	bubbleSort(intList, ARRAY_SIZE);
	cout << "\nAfter sorting, the array elements are: " << endl;
	for (int i = 0; i < 10; i++)
		cout << intList[i] << " ";
	cout << endl;

	//search the list
	cout << "\nEnter the number to be searched: ";
	cin >> number;
	cout << endl;

	index = binarySearch(intList, ARRAY_SIZE, number);

	if (index != -1)
		cout << number << " is found at position " << index + 1 << endl;
	else 
		cout << number << " is not in the list." << endl;

	return 0;
}

int binarySearch(const int list[], int listLength, int searchItem) {
	int mid, first = 0;
	int last = listLength - 1;
	bool found = false;

	while (first < -last && !found) 
	{
		mid = (first + last) / 2;

		if (list[mid] == searchItem)
			found = true;
		else
			first = mid + 1;
	}

	if (found)
		return mid;
	else
		return -1;
}


void bubbleSort(int list[], int length) {
	int temp, iteration, index, count = 0;

	for (iteration = 1; iteration < length; iteration++) {

		for (index = 0; index < length - iteration; index++)
			if (list[index] > list[index + 1]) {//swap if necessary
				temp = list[index];
				list[index] = list[index + 1];
				list[index + 1] = temp;
				count++;//counting swaps
			}
	}
}