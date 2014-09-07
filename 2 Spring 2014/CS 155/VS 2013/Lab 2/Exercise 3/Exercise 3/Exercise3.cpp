/*----------------------------
Sarah Wiegand Lab 2 Exercise 3
----------------------------*/
#include <iostream>
using namespace std;
int main ()
{
	int month, year;
	bool isLeapYear = false;
	cout<<"Please enter the numerical representation of a month."<<endl;
	cin>>month;
	if ((month<1) || (month>12))
	{
		cout<<"Sorry, invalid entry."<<endl;
		system ("pause");
		exit(0);
	}
	cout<<"Please enter the year."<<endl;
	cin>>year;
	if (year<1)
	{
		cout<<"Sorry, invalid entry."<<endl;
		system ("pause");
		exit(0);
	}
	if (((year % 4== 0) && (year % 100!=0)) || (year % 400==0))
	{
		isLeapYear= true;
	}
	switch (month)
	{
		case 1:
		{
			cout<<"There are 31 days in January."<<endl;
		}
			break;
		case 2:
			if (isLeapYear)
			{	
				cout<<"There are 29 days in February."<<endl;
			}
			else
			{
				cout<<"There are 28 days in February."<<endl;
			}
		
			break;
		case 3:
		{
			cout<<"There are 31 days in March."<<endl;
		}
			break;
		case 4:
		{
			cout<<"There are 30 days in April."<<endl;
		}
			break;
		case 5:
		{
			cout<<"There are 31 days in May."<<endl;
		}
			break;
		case 6:
		{
			cout<<"There are 30 days in June."<<endl;
		}
			break;
		case 7:
		{
			cout<<"There are 31 days in July."<<endl;
		}
			break;
		case 8:
		{
			cout<<"There are 31 days in August."<<endl;
		}
			break;
		case 9:
		{
			cout<<"There are 30 days in September."<<endl;
		}
			break;
		case 10:
		{
			cout<<"There are 31 days in October."<<endl;
		}
			break;
		case 11:
		{
			cout<<"There are 30 days in November."<<endl;
		}
			break;
		case 12:
		{
			cout<<"There are 31 days in December."<<endl;
		}
			break;
	}
	if (isLeapYear)
	{
		cout<<"The year "<<year<<" is a leap year."<<endl;
	}
	else
	{
		cout<<"The year "<<year<<" is not a leap year."<<endl;
	}
	system ("pause");
	return 0;
}