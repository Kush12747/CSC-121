//Case Switch Statement using all previous selections as menu items.
//Fall through proprty of the case switch statement
//Case can ONLY work with integer or compatiable data types
// ASCII character has a numeric code (integer) A --> 65
#include <iostream>
using namespace std;

int main()
{
	int score = 0;//declare an intger variable
	cout << "\nPlease enter a value for a score: ";
	cin >> score;//get the score
	cout << "\n Here is the value you entered " << score << endl;

	//prepare the code for menu
	cout << "\nWhat would you like to do with this score? : \n";
	cout << "1. Perfect Score Check \n";
	cout << "2. Even/Odd Check \n";
	cout << "3. Letter Grade Check \n";
	cout << "4. Conditional operator used for Even/Odd Check \n";
	cout << "9. Quit \n";
	int menu = 0;
	cin >> menu;//get the menu item

	//code the case switch statement to respond to the menu
	switch (menu)
	{
		case 1://perfect score
			{
				if (score == 100)//simple if test
				{
					cout << "\nPerfect Score!\n";
					cout << "Bravo! Great!\n";
				}//end of if
				break;
			}//end of case 1
		case 2://Even/Odd
			{
				if ((score % 2) == 0)
					cout << "\n Score is Even!\n";//true part
				else
					cout << "\n Score is Odd!\n";//False part
				break;
			}//end of case 2
		case 3:
			{
				if (score >= 90) //A
					cout << "\n Letter grade is A\n";
				else if (score >= 80) //B
					cout << "\n Letter grade is B\n";
				else if (score >= 70) //C
					cout << "\n Letter grade is C\n";
				else if (score >= 60) //D
					cout << "\n Letter grade is D\n";
				else //F
					cout << "\n Letter grade is F\n";
				break;
			}//end of case 3
		case 4://Conditional operator is short form if then else
			{//syntax is ? true part : false part
					((score % 2) == 0) ? cout << "\n Score is Even!\n" : cout << "\n Score is Odd!\n";
				break;
			}//end of case 4
		case 9:
			{
				cout << endl;
			
			}//end of case 9

	}//end of switch
	return 0;
}//end of main