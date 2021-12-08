#include <iostream>
using namespace std;

int main()
{			  //						  21     22      23
	enum size {SMALL = 10, MEDIUM = 20, LARGE, EXTRA, SPECIAL};//defining domain
	size mysize, yoursize, hersize, hissize;
	mysize = MEDIUM;
	cout << "My size is: " << mysize << endl;//1

	yoursize = size(mysize + 2);//casting
	cout << "Your size is: " << yoursize << endl;//3

	hersize = size(MEDIUM + 1);
	cout << "Her size is: " << hersize << endl;//3

	hissize = size((LARGE - MEDIUM) * 10);
	cout << "His size is: " << hissize << endl;//1

	return 0;
}