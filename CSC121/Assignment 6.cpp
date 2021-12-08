/*
#include <iostream>
#include<string>  

using namespace std;

class dayType {
public:
	void print()  const;
	void setDay(string day);
	int getPrevDay();
	int getNextDay();
	void randDay(int num);
	dayType();
	dayType(string day);
private:
	int num;
	string today;
	string prevDay;
	string nextDay;
};


void dayType::print()  const
{
	cout << "\nToday is: " << today << endl;
}
void dayType::setDay(string day)
{

	if ((day == "Monday") || (day == "monday"))
	{
		num = 0;
		today = day;
	}
	else if ((day == "Tuesday") || (day == "tuesday"))
	{
		num = 1;
		today = day;
	}
	else if ((day == "Wednesday") || (day == "wednesday"))
	{
		num = 2;
		today = day;
	}
	else if ((day == "Thursday") || (day == "thursday"))
	{
		num = 3;
		today = day;
	}
	else if ((day == "Friday") || (day == "friday"))
	{
		num = 4;
		today = day;
	}
	else if ((day == "Saturday") || (day == "saturday"))
	{
		num = 5;
		today = day;
	}
	else if ((day == "Sunday") || (day == "sunday"))
	{
		num = 6;
		today = day;
	}
	else
		cout << "Not a valid day. " << endl;


}
int dayType::getPrevDay()
{
	num--;
	return num;
}
int dayType::getNextDay()
{
	num++;
	return num;
}

//Defaultconstructor  
dayType::dayType()
{
	today = "";

}
//Constructorwithparameters 
dayType::dayType(string day)
{
	string today;
	day = today;
}
void randDay(int num)
{
	int random, add;
	cout << "How many days would you like to add to the current day? ";
	cin >> add;
	if (add > 6)
	{
		random = num + add / 7;
	}
	else
		random = num + add;

	if (random == 0)
	{
		cout << "In " << add << " days, it will be " << "Sunday";
	}
	else if (random == 1)
	{
		cout << "In " << add << " days, it will be " << "Monday";
	}
	else if (random == 2)
	{
		cout << "In " << add << " days, it will be " << "Tuesday";
	}
	else if (random == 3)
	{
		cout << "In " << add << " days, it will be " << "Wednesday";
	}
	else if (random == 4)
	{
		cout << "In " << add << " days, it will be " << "Thursday";
	}
	else if (random == 5)
	{
		cout << "In " << add << " days, it will be " << "Friday";
	}
	else
		cout << "In " << add << " days, it will be " << "Saturday";

}

int main()
{
	string today;
	int dayNum, numDay, newNum;


	cout << "Enter the current day of the week: ";
	cin >> today;

	dayType week;
	week.setDay(today);
	dayNum = week.getPrevDay();
	numDay = week.getNextDay();
	newNum = week.getNextDay();

	cout << "\nYesterday was: ";
	if (dayNum == 0)
	{
		cout << "Monday" << endl;
	}
	else if (dayNum == 1)
	{
		cout << "Tuesday" << endl;
	}
	else if (dayNum == 2)
	{
		cout << "Wednesday" << endl;
	}
	else if (dayNum == 3)
	{
		cout << "Thursday" << endl;
	}
	else if (dayNum == 4)
	{
		cout << "Friday" << endl;
	}
	else if (dayNum == 5)
	{
		cout << "Saturday" << endl;
	}
	else
		cout << "Sunday" << endl;

	week.print();

	cout << "\nTomorrow is: ";
	if (numDay == 0)
	{
		cout << "Tuesday" << endl;
	}
	else if (numDay == 1)
	{
		cout << "Wednesday" << endl;
	}
	else if (numDay == 2)
	{
		cout << "Thursday" << endl;
	}
	else if (numDay == 3)
	{
		cout << "Friday" << endl;
	}
	else if (numDay == 4)
	{
		cout << "Saturday" << endl;
	}
	else if (numDay == 5)
	{
		cout << "Sunday" << endl;
	}
	else
		cout << "Monday" << endl;

	randDay(newNum);
	return 0;
}*/


#include <iostream>
#include <string>
using namespace std;

class Country
{
private:
	int area;
	string countryName;
	int popDensity;

public:
	Country() {
		countryName = "";
		area = 0;
		popDensity = 0;
	}
	Country(string c, int p, int a) {
		countryName = c;
		popDensity = p;
		area = a;
	}
	string

};

int main()
{
	string country;

	cout << "Enter the country's name (no spaces), or QUIT to finish: ";
	cin >> country;

	if (country == "QUIT" || country == "quit")

}