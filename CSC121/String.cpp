/* String topics : String input, reading strings include space.
Reading a whole line as input
String issues with input depending on which order the data is read
Finding length of a string
Extracting sub string from a string
Concatenation : Joining 2 or more strings into one*/


#include <iostream>
#include <string>//pre-written header file
using namespace std;

	int main() 
	{
		int stdId = 0;//initial value
		string name = "";//initializing with null string
		double gpa = 0.0;//declarations and initializations

		cout << "\nPlease enter the values for the following variables..." << endl;//prompting the user
		cout << "Enter the ID: ";
		cin >> stdId;
		cin.ignore();//iostream
		cout << "Enter the full name: ";
		//cin >> name; //can only read ONE word
		getline(cin, name);//use this for strings with more than one word
		cout << "Enter the gpa: ";
		cin >> gpa;

		cout << "\nHere are the values entered" << endl;
		cout << "Student ID\t" << stdId << endl;
		cout << "Student name\t" << name << endl;
		cout << "Length of the stuent name is:\t" << name.length() << endl;//length is a sting function
		cout << "Student GPA:\t" << gpa << endl << endl;

		string fname = name.substr(0, 4);
		string lname = name.substr(5);
		cout << "Student first name:\t\t\t" << fname << endl;
		cout << "Student last name:\t\t\t" << lname << endl;
		cout << "My sister's name \t" << name.substr(0, 5) << name.substr(0, 0) << endl;
		cout << "Using concentration to get full name:\t" << fname + " " + lname << endl;
		

		//Swapping 2 values
		string first("One");
		string second("two");

		//output strings
		cout << "Before swap:\n first: " << first << "\n second:" << second << endl;

		first.swap(second);// swap strings

		cout << "\n\nAfter swap:\n first: " << first << "\n second: " << second << endl;
		
		first.swap(fname);

		cout << "\n\nAfter swap:\n first " << first << "\n fname: " << fname << endl;

		return 0;
	}