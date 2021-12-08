 // Anything #include is a prewritten code made availabe to the user from system library
#include <iostream>//reading or writing
#include <string>//for working with string data
using namespace std;//line is must whenever you include iostream or string
// otherwise you would have to code std::cout everytime

int main()// function header entry into program from OS
{//begining of function body
	string firstName = "John";//declaration and initialization
	string lastName; //declaration
	lastName = "Smith";//initaliazation
	int id = 555;//integer datatype
	float gpa = 3.54;//float datatype
	double hairSize = .000000036;//double data
	char grade = 'C';//char datatype -->expansion of float
	bool tuitionPaid = true;//bool datatype for toggle type data

	//Printing the data to output screen
	cout << "\nSTUDENT INFORMATION\n" << endl;//cout is used to send data
	cout << "First Name: \t" << firstName << endl;//is called stram INERTION operator
	cout << "Last Name: \t" << lastName << endl;//The caption is a literal string
	cout << "ID:\t\t" << id << endl;
	cout << "GPA:\t\t" << gpa << endl;
	cout << "Hair Size: \t" << hairSize << endl;
	cout << "Grade: \t\t" << grade << endl;
	cout << "Tuituion Paid: \t" << tuitionPaid << endl;

	//Finding out where exactly our data is stored on our computer
//is called the address of operator
	cout << "\nSTUDENT INFORMATION\n" << endl;
	cout << "First Name: \t" << firstName << " is stored at location " << &firstName << endl;
	cout << "Last Name: \t" << lastName << " is stored at location " << &lastName << endl;
	cout << "ID:\t\t" << id << " is stored at location " << &id << endl;
	cout << "GPA:\t\t" << gpa << " is stored at location " << &gpa << endl;
	cout << "Hair Size: \t" << hairSize << " is stored at location " << &hairSize << endl;
	cout << "Grade:\t\t" << grade << " is stored at location " << &grade << endl;
	cout << "Tuition Paid: \t" << tuitionPaid << " is stored at location " << &tuitionPaid << endl;
	
	
//Finding out how much space is needed by each datatype in my compiler
//sizeof is a function
	cout << "\nInteger size is: \t" << sizeof(int) << " bytes" << endl;
	cout << "Short size is: \t\t" << sizeof(short) << " bytes" << endl;
	cout << "Long size is: \t\t" << sizeof(long) << " bytes" << endl;
	cout << "Double size is: \t" << sizeof(double) << " bytes" << endl;
	cout << "Character size is:\t" << sizeof(char) << " bytes" << endl;
	cout << "Bool size is: \t\t" << sizeof(bool) << " bytes" << endl;
	
	return 0;//indicates completion of the program and returns to OS
}//end of function body