#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	// sets the seed of the random number generator
	srand(time(0));
	//simulating throwing 2 dice
	for (int i = 1; i <= 10; i++) 
	{	//divide anything by 6 remainder will allways be 0 to 5
		int d1 = 1 + rand() % 6;//41% -41-36 ----> 5
		int d2 = 1 + rand() % 6;//36%6 ---> 0
		cout << d1 << " " << d2 << "\n";
	}
	cout << "\n";
	return 0;
}





/*
//Printing 10 random numbers
#include <iostream>
using namespace std;

int main() 
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		int r = rand();
		cout << r << "\n";
		//cout << rand() << endl;
	}
	return 0;
}*/