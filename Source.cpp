#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//function prototyping

void getRaceTimes(string&, double&);
void findWinner(string, string, string, double, double, double);
void welcome();
double raceAverage(double, double, double);

int main()

{
	double rtime1, rtime2, rtime3;
	double average;
	string racerName1, racerName2, racerName3;


	welcome();
	getRaceTimes(racerName1, rtime1);
	getRaceTimes(racerName2, rtime2);
	getRaceTimes(racerName3, rtime3);

	findWinner(racerName1, racerName2, racerName3, rtime1, rtime2, rtime3);

	raceAverage(rtime1, rtime2, rtime3);

	return 0;
}

void getRaceTimes(string& racerName, double& raceTime)
{
	cout << "Please enter the racer's first name > ";
	cin >> racerName;
	cout << "Please enter the racer's time > ";
	do
	{
		if (raceTime >= 0)
		{
			cin >> raceTime;
		}

		else
		{
			cout << "Invalid" << endl;
		}

	} while (raceTime >= 0);


}

void findWinner(string racer1, string racer2, string racer3, double time1, double time2, double time3)
{
	if (time1 < time2 && time1 < time3)
	{
		cout << endl;
		cout << "Congratulations " << racer1 << "! You are the winner!" << endl;
	}

	else if (time2 < time1 && time2 < time3)
	{
		cout << endl;
		cout << "Congratulations " << racer2 << "! You are the winner!" << endl;
	}

	else if (time3 < time1 && time3 < time2)
	{
		cout << endl;
		cout << "Congratulations " << racer3 << "! You are the winner!" << endl;
	}

	else if (time1 == time2)
	{
		cout << endl;
		cout << "It's a TIE! " << racer1 << " and " << racer2 << " are the winners!" << endl;
	}

	else if (time1 == time3)
	{
		cout << endl;
		cout << "It's a TIE! " << racer1 << " and " << racer3 << " are the winners!" << endl;
	}

	else if (time2 == time3)
	{
		cout << endl;
		cout << "It's a TIE! " << racer2 << " and " << racer3 << " are the winners!" << endl;
	}

	
	else
	{
		cout << endl;
		cout << "It's a three way TIE! There is no winner for this race!" << endl;
	}



}

void welcome()
{

	cout << "***********************************************************************" << endl;
	cout << endl;
	cout << "  Welcome to Race Results Program" << endl;
	cout << "  Enter the Three Racers Names" << endl;
	cout << "  and Their Race Times." << endl;
	cout << endl;
	cout << "   Please enter a real number for Race Time (the Race Time Must be > 0)" << endl;
	cout << endl;
	cout << "   Program Developed by: Codie Fret" << endl;
	cout << endl;
	cout << "***********************************************************************" << endl;
	cout << endl;


}

double raceAverage(double time1, double time2, double time3)
{

	double average = 0;

	average = (time1 + time2 + time3) / 3;

	cout << endl;
	cout << "The average for all races is " << average << endl;
	//need to calculate average

	return average;


}
