//Selection sort/Linear sort
#include <iostream>
using namespace std;

void selectionSort(int list[], int);

int main() {
	//int i, list[] = { 2, 56, 34, 25, 73, 46, 89, 10, 5, 16 };
	int i, list[] = { 1, 2, 3, 4, 5, 6, 11, 10, 9, 8 };

	cout << "Before sorting the array elements are: " << endl;
	for (i = 0; i < 10; i++)
		cout << list[i] << " ";
	cout << endl;

	selectionSort(list, 10);//call sort

	cout << "\nAfter SELECTION sorting, the array elements are:" << endl;
	for (i = 0; i < 10; i++)
		cout << list[i] << " ";
	cout << endl;
	return 0;
}

void selectionSort(int list[], int length) {
	int index, smallestIndex, minIndex, temp, count = 0;

	for (index = 0; index < length - 1; index++)//pass -->9
	{
		//step a
		smallestIndex = index;//first one is smallest

		for (minIndex = index + 1; minIndex < length; minIndex++)
			if (list[minIndex] < list[smallestIndex])
				smallestIndex = minIndex;

			//step b //swap (1 swap statements = 3 assignment statements)
			temp = list[smallestIndex];
			list[smallestIndex] = list[index];
			list[index] = temp;
			count++;//count the swaps
	}//2, 56, 34, 25, 73, 46, 89, 10, 5, 16
	cout << "\nTotal number of swaps " << count << endl;
}