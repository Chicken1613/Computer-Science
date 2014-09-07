/*----------------------------
Sarah Wiegand Lab 7 Exercise 2
----------------------------*/
#include <iostream>
using namespace std;
const int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
bool valid_date (int day, int month)
{
	bool _valid=false;
	if ((month>0) && (month<13) && (day>0) && (day<=month_days[month-1]))
	{
		_valid=true;
	}
	return (_valid);
}
int calc_days (int day1, int month1, int day2, int month2)
{
	int days1= 0, days2= 0;
	for (int i= 0; i<month1-2; i++)
	{
		days1+= month_days[i];
	}
	days1+= day1;
	for (int i= 0; i<month2-2; i++)
	{
		days2+= month_days[i];
	}
	days2+= day2;
	return (days2-days1);
}
int main ()
{
	int day1= -1, month1= -1, day2= -1, month2= -1, between;
	while (!valid_date(day1, month1))
	{
		cout<<"Please enter the first day and month."<<endl;
		cin>>day1;
		cin>>month1;
	}
	while (!valid_date(day2, month2))
	{
		cout<<"Please enter the second day and month."<<endl;
		cin>>day2;
		cin>>month2;
	}
	cout<<"Days between:	"<< calc_days (day1,month1, day2, month2)<<endl;
	system ("pause");
	return 0;
}