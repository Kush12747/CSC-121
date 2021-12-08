#include <iostream>
using namespace std;

int main()
{
	int p1, p2, p3, p4, p5, p6, p7, p8, p9, p10;
	
	for (int i = 1; i <= 10; i++) {
		cout << "Person " << i << ", Enter the number of pancakes: ";
		cin >> p1, p2, p3, p4, p5, p6, p7, p8, p9, p10;
		if ((p1 || p2 || p3 || p4 || p5 || p6 || p7 || p8 || p9 || p10) == 0) {
			cout << "Invalid Entry";
		}
	}
}
/*#include <iostream>
using namespace std;

int main() 
{
	int num;
	int count = 0;
	do 
	{
		cout << "Guess any number: ";
		cin >> num;
		count++;

		if (num == 5)
		{
			cout << "Hey! you weren't supposed to enter 5!" << endl;
			break;
		}
	
		if (count == 10 && num != 5) {
			cout << "Wow, you're more patient then I am, you win." << endl;
			break;
		}
	
	} while (num != 5);
}*/

/*//signing up for a credit card application
#include <iostream>
#include <string>
using namespace std;

void name();
void age();
void social();
void final();
void addressInfo();

int main() {
	cout << "\t\tWelcom to the credit card application" << endl;
	cout << "\nEnter the following information prompted on the screen." << endl;
	name();
	social();
	age();
	addressInfo();
	final();
}
void name() {
	string name;
	cin.ignore();
	cout << "Enter your full name: ";
	getline(cin, name);
}
void social() {
	int num;
	cout << "\nEnter last 4 digits of social: ";
	cin >> num;
}
void age() {
	int num2;
	cout << "\nEnter your age: ";
	cin >> num2;

	if (num2 < 18) {
		cout << "\nYou can't qualify for a credit card" << endl << endl;
	}
}
void addressInfo() {
	int digit;
	int digit1;
	string correct;
	string address;
	string city;
	string state;

	cout << "\nEnter your zip code: ";
	cin >> digit;

	cout << "\nEnter your 4 home code: ";
	cin >> digit1;

	cin.ignore();
	cout << "\nEnter your street address info: ";
	getline (cin, address);

	cout << "\nEnter the city: ";
	cin >> city;

	cout << "\nEnter the state: ";
	cin >> state;

	cout << "\nDoes this look correct: " << digit1 << " " << address << ", " << city << " " << state <<": ";
	cin >> correct;
}
void final() {
	cout << "\nYou passed the appication process\n";
	cout << "\n\t\tHERE IS YOUR CARD INFORMATION!!\n" << endl;
	cout << "===========================";
	cout << name;
		cout << "1234-5678-4523-8746" << "\tEXP: 2025";
	cout << "\n===========================";
}*/

/*//Casino number guessing
#include <iostream>
#include <string>
using namespace std;

string getName();
void amount();

int main() {
	cout << "=========================================="
		<< "\n\tWELCOME TO THE CASINO"
		<< "\n==========================================\n";
	string getName();
	void amount();

}
string getName() {
	string Name;
	cout << "Enter the player name: ";
	cin >> Name;
	cin.ignore();
	return Name;
}
void amount() {
	int amt;
	cout << "Enter the amount to bet: ";
	cin >> amt;
}*/

/*
//Write a function sort2(int& a, int& b) that does not return anything but that swaps the values of a and b if a is greater than b, otherwise leaves a and b unchanged. 
#include <iostream>
using namespace std;

void sort2(int& a, int& b)
{
	if (a > b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
}

int main()
{
	int u = 2;
	int v = 3;
	int w = 4;
	int x = 1;
	sort2(u, v);
	sort2(w, x);

	cout << "u : " << u << endl;
	cout << "v : " << v << endl;
	cout << "w : " << w << endl;
	cout << "x : " << x << endl;
}


/*#include <iostream>
#include <string>
using namespace std;

string middle(string str) {
	int i = str.length();

	if ((i % 2) == 0) {
		return str.substr(i / 2 - 1, 2);
	}
	return str.substr(i / 2, 1);
}

int main() {
	cout << "The middle character of 'pineapple' is: " << middle("pineapple") << endl;
	cout << "The middle character of 'middle' is: " << middle("middle") << endl;
}


#include <iostream>
using namespace std;

void DepositMoney();
void WithdrawMoney();
void CheckBalance();

double balance = 0;

int main() {
	int password = 0;
	int input;

	cout << "\t\t====Welcome to the ATM====";
	cout << "\nEnter you 4 digit password: ";
	cin >> password;

	cout << "\nHere are your choices.";
	cout << "\n1. Deposit Money."
		<< "\n2. Withdraw Money."
		<< "\n3. Check Balance."
		<< "\n4. Quit(69).\n";
	cin >> input;

	while (input != 69) {
		switch (input) {
		case 1: DepositMoney();
			break;
		case 2: WithdrawMoney();
			break;
		case 3: CheckBalance();
			break;
		case 4:
			cout << endl;
		}
	}
}
void DepositMoney() {
	double deposit = 0.0;

	cout << "Enter the amount to deposit: ";
	cin >> deposit;

	balance = deposit - balance;

	cout << "Your balance remaining: " << balance << endl;
}
void WithdrawMoney() {
	double withdraw = 0.0;

	cout << "Enter the amount to withdraw: ";
	cin >> withdraw;

	balance = withdraw - balance;
	
	cout << "Your balance remaining: " << balance << endl;
}
void CheckBalance() {
	cout << "Balnce is: " << balance << endl;
}

//while user 
#include <iostream>
using namespace std;

int main() {
	int num = 0;
	int score = 0;
	do
	{
		cout << "\nGuess the number";
		cin >> num;
	
		switch (num) 
		{
			case 1: 
			{
				while (num == 5) {
					cout << "You guess the right number!" << endl;
					score++;
				}
				while (num != 5) {
					cout << "\nKeep guessing";
					score++;
				}
			}//end of case 1

		}//end of switch
	} while (num <= 5);
}

#include <iostream>
using namespace std;

int main() {
	double num1, num2;

	cout << "\t\tWelcome to the calculator" << endl;
	cout << "\nEnter any number: ";
	cin >> num1;
	cout << "\nEnter your second number: ";
	cin >> num2;

	cout << "\n\tMENU SUMMARY";
	cout << "\n1. ADD";
	cout << "\n2. Multiply";
	cout << "\n3. subtract";
	cout << "\n4. Divide";
	cout << "\n9. Quit";
	cout << "\nWhat would like to do? ";
	int menu = 0;
	cin >> menu;

	switch (menu)
	{
		case 1: 
		{
			if (menu == 1) {
				cout << "\nThe reuslt is: " << num1 + num2 << endl;
			}//end of if statement
		}//end of case 1

		case 2: 
		{
			if (menu == 2) {
				cout << "\nThe result is: " << num1 * num2 << endl;
			}//end of if statement
		}//end of case 2

		case 3:
		{
			if (menu == 3) {
				cout << "\nThe result is: " << num1 - num2 << endl;
			}//end of if statement
		}//end of case 3

		case 4:
		{
			if (menu == 4) 
			{
				cout << "\nThe result is: " << num1 / num2 << endl;
			}//end of if statement
		}//end og case 4

		case 9: 
		{
			cout << endl;
		}//end of case 9
		
	}

}

#include <iostream>
using namespace std;

int main() {
	int num{ 0 };
	char again;

	cout << "Please enter Y to continue this program ";
	cin >> again;
	while ((again == 'y') || (again == 'Y')) //#2
	{
		cout << "\nWhat number would you like to convert in binary: ";
		cin >> num;
		while (num != 0) {
			cout << "\n" <<num % 2;
			num = num / 2;
		}

		cout << "\nWould you like to try another number? "; 
		cin >> again;
	}
	cout << endl;
	
}

#include <iostream>
using namespace std;

int main() {
	int speed{ 0 };
	int time{ 0 };
	int distance{ 0 };
	//distance = spped * time;

	cout << "What is the speed of the vechicle in mph?: ";
	cin >> speed;
	cout << "How many hours has it travled: ";
	cin >> time;

	for (int i = 0; i < time; i++) {
		distance += speed;
		cout << " " << (i + 1) << " " << distance << endl;
	}

}
*/