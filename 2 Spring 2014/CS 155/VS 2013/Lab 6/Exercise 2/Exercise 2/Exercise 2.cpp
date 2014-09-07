/*----------------------------
Sarah Wiegand Lab 6 Exercise 2
----------------------------*/
#include <iostream>
using namespace std;
bool check (int theNumber, int guess)
{
	bool _check=false;
	if (guess<theNumber)
	{
		cout<<"Too low. Try again."<<endl;
	}
	if (guess>theNumber)
	{
		cout<<"Too high. Try again."<<endl;
	}
	if (guess==theNumber)
	{
		cout<<"Excellent! You guessed the number!"<<endl;
		_check=true;
	}
	return _check;
}
int main()
{
	int guess;
	int theNumber=60;
	cout<<"I have a number between 1 and 100."<<endl;
	cout<<"Can you guess my number?"<<endl;
	do
	{
		cout<<"Please type your guess."<<endl;
		cin>>guess;
	} while(check(theNumber,guess)==false);
	system ("pause");
	return 0;
}