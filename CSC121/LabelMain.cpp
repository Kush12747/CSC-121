#include "Label.h"
#include <iostream>
using namespace std;
int main()
{
	label mailing;//creating an object using default constructor
	mailing.getInput();//getInput(mailing);
	mailing.print();//print(mailing);

	label person("Kush", "Gandhi", 60074);//creating an object using overloaded constructor
	person.print();

	mailing.setFname("Ben");//mailing.gname = "Ben";
	mailing.setLname("Noble");
	mailing.setZip(99999);

	cout << mailing.getFname() << "\t" << mailing.getLname() << endl;
	cout << mailing.getZip() << endl;

	person.getInput();//getInput(person);
	person.print();//print(person);

	return 0;
}