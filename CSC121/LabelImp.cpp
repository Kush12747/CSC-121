//compiler will look for this file in system libary
#include "Label.h"
//Function implentation
//::Scope Resolution Operator
label::label()//default constructor
{
	fname = "";
	lname = "";
	zip = 0;
}

label::label(string f, string l, int z)//overloaded constuctor
{
	fname = f;
	lname = l;
	zip = z;
}

label::~label()//destructure ~ tilde
{
	cout << "\n object destroyed\n";
}

//get functions Accessor function
string label::getFname()
{
	return fname;
}
string label::getLname()
{
	return lname;
}
int label::getZip()
{
	return zip;
}

//set functions Mutator function
void label::setFname(string f)
{
	fname = f;
}
void label::setLname(string l)
{
	lname = l;
}
void label::setZip(int z)
{
	zip = z;
}
//extra functions
void label::print()
{
	cout << getFname() << "\t" << getLname() << endl;
	cout << getZip() << endl << endl;
}
void label::getInput()
{
	cout << "Please enter the label information: \n";
	getline(cin, fname);
	getline(cin, lname);
	cin >> zip;
	cin.ignore();
}
