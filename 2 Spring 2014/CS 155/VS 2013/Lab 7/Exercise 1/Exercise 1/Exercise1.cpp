/*----------------------------
Sarah Wiegand Lab 7 Exercise 1
----------------------------*/
#include <iostream>
using namespace std;
bool validate (double change)
{
	 bool _validate=false;
	 if (change>0)
	 {
		 _validate=true;
	 }
	return _validate;
}
void calc_change (double change)
{
	int change2=change*100;
	int dollars=change2/100;
	int quarter=(change2%100)/25;
	int dime=((change2%100)%25)/10;
	int nickel=(((change2%100)%25)%10)/5;
	int penny=((((change2%100)%25)%10)%5)/1;
	cout<<"Your change is:"<<endl;
	cout<<"Dollars:	"<<dollars<<endl;
	cout<<"Quarters:	"<<quarter<<endl;
	cout<<"Dimes:		"<<dime<<endl;
	cout<<"Nickels:	"<<nickel<<endl;
	cout<<"Pennies:	"<<penny<<endl;
}
int main()
{
	double change;
	cout<<"Please enter an amount in dollars."<<endl;
	cin>>change;
	if (validate (change))
	{
		calc_change (change);
	}
	system ("pause");
	return 0;
}