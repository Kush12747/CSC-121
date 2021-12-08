
//Assignment 4 Exercise 1
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	cout << "\t\tReport to the Media\n\nEvent: Diving Competition\n\n";
	cout << fixed << showpoint << setprecision(2);
	char next;
	string divername;
	string city;
	double JudgeScore[5];
	double Difficulty;
	double High, Low;
	double TotalScore;
	int AmountofDivers = 0;
	double DiverAverage = 0;
	do
	{
		AmountofDivers = AmountofDivers + 1;
		cout << "Please enter the name of the Diver: ";
		getline(cin, divername);
		cout << "\nPlease enter the Diver's City: ";
		getline(cin, city);
		cout << endl;
		High = 0;
		Low = 0;
		TotalScore = 0;
		int i;
		i = 0;
		do
		{

			i = i + 1;
			cout << "Enter the score given by judge #" << i << ": ";
			cin >> JudgeScore[i];
			if ((JudgeScore[i] < 0) || (JudgeScore[i] > 10))
			{
				cout << "Invalid score - Please reenter (Valid Range: 0 - 10)\n";
				i = i - 1;
			}

			if (High < JudgeScore[i])
				High = JudgeScore[i];
			if (i == 1)
				Low = JudgeScore[i];
			if (i == 1)
				High = JudgeScore[i];
			if (Low > JudgeScore[i])
				Low = JudgeScore[i];
			TotalScore += JudgeScore[i];

		} while (i < 5);
		do
		{
			i = i + 1;
			cout << "\nWhat was the degree of difficulty? ";
			cin >> Difficulty;
			if ((Difficulty < 1) || (Difficulty > 1.67))
			{
				i = i - 1;
				cout << "Invalid degree of difficulty - Please reenter (Valid Range: 1 - 1.67)\n";
			}
		} while (i <= 5);
		TotalScore = TotalScore - High;
		TotalScore = TotalScore - Low;
		TotalScore = TotalScore * Difficulty;
		TotalScore = TotalScore / 3;
		cout << "\n\tDiver: " << divername << ", City: " << city << endl;
		cout << "\tOverall Score was " << TotalScore << endl;

		DiverAverage = DiverAverage + TotalScore;
		cout << "\nWould you like to continue to the next Diver? (N/Y): ";
		cin >> next;
		cout << endl;
		cin.ignore();
	} while ((next == 'Y') || (next == 'y'));

	DiverAverage = DiverAverage / AmountofDivers;
	cout << "\n\n\tEvent Summary\nNumber of Divers Participating: " << AmountofDivers << endl;
	cout << "Average Score of All Divers: " << DiverAverage << endl;



	return 0;
}


/*
//Assignment 4 Exercise 1
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	cout << "\t\tReport to the Media\n\nEvent: Diving Competition\n\n";
	cout << fixed << showpoint << setprecision(2);
	char next;
	string divername;
	string city;
	double JudgeScore[5];
	double Difficulty;
	double High, Low;
	double TotalScore;
	int AmountofDivers = 0;
	double DiverAverage = 0;
	do
	{
		AmountofDivers = AmountofDivers + 1;
		cout << "Please enter the name of the Diver: ";
		getline(cin, divername);
		cout << "\nPlease enter the Diver's City: ";
		getline(cin, city);
		cout << endl;
		High = 0;
		Low = 0;
		TotalScore = 0;
		int i;
		i = 0;
		do
		{

			i = i + 1;
			cout << "Enter the score given by judge #" << i << ": ";
			cin >> JudgeScore[i];
			if ((JudgeScore[i] < 0) || (JudgeScore[i] > 10))
			{
				cout << "Invalid score - Please reenter (Valid Range: 0 - 10)\n";
				i = i - 1;
			}

			if (High < JudgeScore[i])
				High = JudgeScore[i];
			if (i == 1)
				Low = JudgeScore[i];
			if (i == 1)
				High = JudgeScore[i];
			if (Low > JudgeScore[i])
				Low = JudgeScore[i];
			TotalScore += JudgeScore[i];

		} while (i < 5);
		do
		{
			i = i + 1;
			cout << "\nWhat was the degree of difficulty? ";
			cin >> Difficulty;
			if ((Difficulty < 1) || (Difficulty > 1.67))
			{
				i = i - 1;
				cout << "Invalid degree of difficulty - Please reenter (Valid Range: 1 - 1.67)\n";
			}
		} while (i <= 5);
		TotalScore = TotalScore - High;
		TotalScore = TotalScore - Low;
		TotalScore = TotalScore * Difficulty;
		TotalScore = TotalScore / 3;
		cout << "\n\tDiver: " << divername << ", City: " << city << endl;
		cout << "\tOverall Score was " << TotalScore << endl;

		DiverAverage = DiverAverage + TotalScore;
		cout << "\nWould you like to continue to the next Diver? (N/Y): ";
		cin >> next;
		cout << endl;
		cin.ignore();
	} while ((next == 'Y') || (next == 'y'));

	DiverAverage = DiverAverage / AmountofDivers;
	cout << "\n\n\tEvent Summary\nNumber of Divers Participating: " << AmountofDivers << endl;
	cout << "Average Score of All Divers: " << DiverAverage << endl;
	return 0;*/

/*#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	char again;
	string diverName;
	string city;
	double degreeOfDiffucutly;
	double judgeScore[5];
	double High, Low;
	double totalScore;
	int numDivers{ 0 };
	double diverAvg{ 0 };

	cout << "\t\tReport to the Media\n\nEvent: Diving Competition\n\n";

	do
	{
		cout << "\nEnter the diver's name: ";
		getline(cin, diverName);
		cout << "\nEnter the driver's city: ";
		getline(cin, city);
		cout << endl;
		High = 0;
		Low = 0;
		totalScore = 0;
		int i;
		i = 0;

		do
		{
			i = i + 1;
			cout << "Enter the score given by the judge #" << i << ":";
			cin >> judgeScore[i];
			if ((judgeScore[i] < 0) || (judgeScore[i]) > 10) {
				cout << "Invalid score- Please reenter(Valid Range: 0-10)" << endl;
				i = i - 1;
			}

			if (High < judgeScore[i])
				High = judgeScore[i];
			if (i == 1)
				Low = judgeScore[i];
			if (i == 1)
				High = judgeScore[i];
			if (Low > judgeScore[i])
				Low = judgeScore[i];
			totalScore += judgeScore[i];

		} while (i < 5);

		do
		{
			i = i + 1;
			cout << "what was the degree of dificutly? ";
			cin >> degreeOfDiffucutly;
			if (degreeOfDiffucutly < 1 || degreeOfDiffucutly > 1.67) {
				cout << "Invalid degree of difficutly-Please reenter (Valid Range: 1-1.67)";
			}
		} while (i <= 5);
		totalScore = totalScore - High;
		totalScore = totalScore - Low;
		totalScore = totalScore * degreeOfDiffucutly;
		totalScore = totalScore / 3;

		//display the output
		cout << "\nDriver: " << diverName << ", " << "City: " << city << endl;
		cout << "Overall score was " << totalScore << endl;

		diverAvg = diverAvg + totalScore;
		cout << "Do you want to process another diver(Y/N)? ";
		cin >> again;
		cin.ignore();
	} while (again == 'Y' || again == 'y');

	//event summary
	diverAvg = diverAvg / numDivers;
	cout << "\n\tEVENT SUMMARY" << endl;
	cout << "Number of divers participating: " << numDivers << endl;
	cout << "Average score of all divers: " << diverAvg << endl;
	return 0;


}*/


/*int main() {
	//variables
	char again = 'y'; {};
	string diverName = "";
	string diverCity = "";
	double highestScore{ 0 };
	double lowestScore{ 0 };
	double totalScore{ 0 };
	double overallScore{ 0 };
	double DegreeOfDifficulty{ 0 };
	double diverTotal{ 0 };
	double avgScore{ 0 };
	double score1{ 0 }, score2{ 0 }, score3{ 0 }, score4{ 0 }, score5{ 0 };
	int numberDivers{ 0 };

	cout << "Event: Diving competition" << endl;

	while (again == 'y' || again == 'Y')
	{
		cout << "\nEnter the diver's name: ";
		getline(cin, diverName);
		cout << "\nEnter the driver's city: ";
		getline(cin, diverCity);

		unsigned int numJudges{ 0 };
		do//judge 1
		{
			cout << "Enter the score given by the judge #" << numJudges + 1 << ":";
			cin >> score1;
			while (score1 < 1 || score1 > 10)
			{
				cout << "Invalid score- Please reenter(Valid Range: 0-10)" << endl;;
				cout << "Enter the score given by the judge #" << numJudges + 1 << ":";
				cin >> score1;
			}
			numJudges++;
		} while (numJudges < 1);


		do//judge 2
		{
			cout << "Enter the score given by the judge #" << numJudges + 1 << ":";
			cin >> score2;
			while (score2 < 1 || score2 > 10)
			{
				cout << "Invalid score- Please reenter(Valid Range: 0-10)" << endl;;
				cout << "Enter the score given by the judge #" << numJudges + 1 << ":";
				cin >> score2;
			}
			numJudges++;
		} while (numJudges < 1);
		if (score2 < score1)
				score2 = lowestScore;
		if (score2 > score1)
				score2 = highestScore;

		do//judge 3
		{
			cout << "Enter the score given by the judge #" << numJudges + 1 << ":";
			cin >> score3;
			while (score3 < 1 || score3 > 10)
			{
				cout << "Invalid score- Please reenter(Valid Range: 0-10)" << endl;;
				cout << "Enter the score given by the judge #" << numJudges + 1 << ":";
				cin >> score3;
			}
			numJudges++;
		} while (numJudges < 1);
		if (score3 < lowestScore)
				score3 = lowestScore;
		if (score3 > highestScore)
				score3 = highestScore;

		do//judge 4
		{
			cout << "Enter the score given by the judge #" << numJudges + 1 << ":";
			cin >> score4;
			while (score4 < 1 || score4 > 10)
			{
				cout << "Invalid score- Please reenter(Valid Range: 0-10)" << endl;;
				cout << "Enter the score given by the judge #" << numJudges + 1 << ":";
				cin >> score4;
			}
			numJudges++;
		} while (numJudges < 1);
		if (score4 < lowestScore)
				score4 = lowestScore;
		if (score4 > highestScore)
				score4 = highestScore;

		do//judge 5
		{
			cout << "Enter the score given by the judge #" << numJudges + 1 << ":";
			cin >> score5;
			while (score5 < 1 || score5 > 10)
			{
				cout << "Invalid score- Please reenter(Valid Range: 0-10)" << endl;;
				cout << "Enter the score given by the judge #" << numJudges + 1 << ":";
				cin >> score5;
			}
			numJudges++;
		} while (numJudges < 1);
		if (score5 < lowestScore)
				score5 = lowestScore;
		if (score5 > highestScore)
				score5 = highestScore;

		diverTotal = (score1 + score2 + score3 + score4 + score5) - highestScore - lowestScore;

		//calculate the degree of dificutly and overall driver score
		cout << "what was the degree of dificutly? ";
		cin >> DegreeOfDifficulty;
		while (DegreeOfDifficulty < 1 || DegreeOfDifficulty > 1.67) {
			cout << "Invalid degree of difficutly-Please reenter (Valid Range: 1-1.67)";
			cout << "\nWhat was the degree of dificutly? ";
			cin >> DegreeOfDifficulty;
		}
		overallScore = (diverTotal / 3) * DegreeOfDifficulty;

		//display the output
		cout << "\nDriver: " << diverName << ", " << "City: " << diverCity << endl;
		cout << "Overall score was " << overallScore << endl;

		cout << "Do you want to process another diver(Y/N)? ";
		cin >> again;
		cin.ignore();
		numberDivers++;
	}

	//event summary
	avgScore = totalScore / numberDivers;
	cout << "\n\tEVENT SUMMARY" << endl;
	cout << "Number of divers participating: " << numberDivers << endl;
	cout << "Average score of all divers: " << avgScore << endl;
	return 0;
}*/
