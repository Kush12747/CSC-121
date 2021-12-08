/* Start with selection statements
First: simple if statement*/
#include <iostream>
using namespace std;

int main() 
{
	int score; // declare an ineger variable
	cout << "Please enter a value for score: "; //Prompt the user
	cin >> score; // get input from keyword
	cout << "Here is the value you entered for score: " << score << endl;//echoing

	//simple if statement #1
	//Testing for perfect score ==>PROBLEM 0 to 100
	/* Keyword if following by condition(TEST) of equality followed by the block
	of code to be excuted when the test returns true. Always put the test in parantheses
	equality operator is ==. DO NOT CONFUSE WITH = (asssignment operator)*/
	/*if (score == 100)
	{//single pathway we take if the condition is true
		cout << "Score is perfect!!!" << endl;
		cout << "Bravo!" << endl;
		cout << "Great!!!" << endl;
	}//curly braces are needed when the if statement has more than one line of code in the block
*/

	//if then else statement has 2 pathways, one for true and one for false #2
	//check to see if the score entered is EVEN or ODD -->PROBLEM
	/*if ((score % 2) == 0) //% is the modulus operator that returns the remainder
	{//gives the remainder to be compared to 0
		cout << "\n Score is even!\n\n"; //TRUE Body
	}
	else
	{//what follows else is false body
		cout << "\n Score is odd!\n\n";
	}
	*/

	/*
	//if then else if statement, multiple pathways #3
	//Print the letter grade for the given sccore -->PROBLEM
	if (score > 89)//(score > 79)
		cout << "Letter Grade is A" << endl;
	else if (score >= 80)//(score > 79)
		cout << "Letter Grade is B" << endl;
	else if (score >= 70)
		cout << "Letter Grade is C" << endl;
	else if (score >= 60)
		cout << "Letter Grade is D" << endl;
	else //This is called default else //catch all
		cout << "Letter Grade is F" << endl;
	*/

	/*
	//ALTERNATE LOGIC
	//Rewrite the above so that choice of F grade is first.
	if (score < 60)
		cout << "Letter Grade is F" << endl;
	else if (score < 70)
		cout << "Letter Grade is D" << endl;
	else if (score < 80)
		cout << "Letter Grade is C" << endl;
	else if (score < 90)
		cout << "Letter Grade is B" << endl;
	else
		cout << "Letter Grade is A" << endl;
	*/

	/*
	//Coding for Range with logical operators USING NESTED IF ELSE STATEMENTS #4
	//Make sure the braces are matching
	if ((score >= 90) && (score < 90))//range test
		cout << "Your grade is A." << endl;
	else
	{
		if ((score >= 80) && (score < 90))
			cout << "Your grade is B." << endl;
		else
		{
			if ((score >= 70) && (score < 80))
				cout << "Your grade is C." << endl;
			else
			{
				if ((score >= 60) && (score < 70))
					cout << "Your grade is D." << endl;
				else
					cout << "Your grade is F." << endl;
			}
		}
	}
	*/

	//#5
		//using conditional operator ?: to find out if the score is odd/even
		//short version if else --> works for single line bodies
	((score % 2) == 0) ? cout << "\n Score is Even!\n" : cout << "\n Score is odd!\n";
	
	//system("pause");
	return 0;
}