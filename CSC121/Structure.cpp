#include <iostream>
#include <string>
using namespace std;

//Definition
//record --->stdid sname sgrade sbirth
struct label//This is just a TEMPLATE no memory is asssigned or variables created
{
	string fname;//member of label
	string lname;
	int zip;
};//dont forget semicolon. This makes it the DEFINITION

void print(label);//parameter is a structure
void GetInput(label&);//structure passed by refrence

int main()
{
	label mailing, person;//declared 2 variavles of type label
	GetInput(person);//we have data for person
	print(person);

	mailing.fname = "John";//This is called dot notation
	mailing.lname = "Smith";
	mailing.zip = 60101;
	print(mailing);4

	GetInput(mailing);
	print(mailing);
	return 0;
}

void print(label p)
{
	cout << p.fname << "\t" << p.lname << endl;
	cout << p.zip << endl << endl;
}

void GetInput(label& p) 
{
	cout << "Enter the persons first name, last name and zip: ";
	getline(cin, p.fname);
	getline(cin, p.lname);
	cin >> p.zip;
	cin.ignore();
}