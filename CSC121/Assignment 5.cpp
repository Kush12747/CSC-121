#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

int ReadDials(char& d1, char& d2, char& d3, char& d4, char& d5, char& d6, char& d7, char& d8);
int ToDigit(char &d);
void AcknowlegeCall(char d1, char d2, char d3, char d4, char d5, char d6, char d7, char d8);

int main() {
	char d1, d2, d3, d4, d5, d6, d7, d8;
	int ReturnValue = 0;

	while (ReturnValue != -5) {
		ReturnValue = ReadDials(d1, d2, d3, d4, d5, d6, d7, d8);
		
		switch (ReturnValue) 
		{
			case -1: cout << "Error- An invalid character was entered\n" << endl; break;

			case -2: cout << "Error- Phone number cannot begin with 0\n" << endl; break;

			case -3: cout << "Error- Phone number cannot begin with 555\n" << endl; break;

			case -4: cout << "Error- Hyphen is not in the correct position\n" << endl; break;

			default: AcknowlegeCall(d1, d2, d3, d4, d5, d6, d7, d8);

		}//end of switch
	}//end of loop
	system("pause");
	return 0;
}

int ReadDials(char& d1, char& d2, char& d3, char& d4, char& d5, char& d6, char& d7, char& d8) {
	int ReturnValue;
	cout << "Enter a phone number(Q to quit): ";
	cin >> d1;

	if (d1 == 'Q' || d1 == 'q')
		return -5;
	cin >> d2 >> d3 >> d4 >> d5 >> d6 >> d7 >> d8;
		
	ReturnValue = ToDigit(d1);
	if (ReturnValue == -1)
		return ReturnValue;

	ReturnValue = ToDigit(d2);
	if (ReturnValue == -1)
		return ReturnValue;

	ReturnValue = ToDigit(d3);
	if (ReturnValue == -1)
		return ReturnValue;

	if (d4 != '-')
		return -4;
	ReturnValue = ToDigit(d5);
	if (ReturnValue == -1)
		return ReturnValue;

	ReturnValue = ToDigit(d6);
	if (ReturnValue == -1)
		return ReturnValue;

	ReturnValue = ToDigit(d7);
	if (ReturnValue == -1)
		return ReturnValue;

	ReturnValue = ToDigit(d8);
	if (ReturnValue == -1)
		return ReturnValue;

	if (d1 == '0')
		return -2;
	if (d1 == '5' && d2 == '5' && d3 == '5')
		return -3;
	return 0;

}

int ToDigit(char& d) {
	d = toupper(d);

	switch (d)

	{

	case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9': break;
	case 'A': case 'B': case 'C': d = '2'; break;
	case 'D': case 'E': case 'F': d = '3'; break;
	case 'G': case 'H': case 'I': d = '4'; break;
	case 'J': case 'K': case 'L': d = '5'; break;
	case 'M': case 'N': case 'O': d = '6'; break;
	case 'P': case 'Q': case 'R': case 'S': d = '7'; break;
	case 'T': case 'U': case 'V': d = '8'; break;
	case 'W': case 'X': case 'Y': case 'Z': d = '9'; break;
	default: return -1;

	}
}

void AcknowlegeCall(char d1, char d2, char d3, char d4, char d5, char d6, char d7, char d8) {

	cout << "Phone Number Dialed: " << d1 << d2 << d3 << d4 << d5 << d6 << d7 << d8 << endl << endl;
}