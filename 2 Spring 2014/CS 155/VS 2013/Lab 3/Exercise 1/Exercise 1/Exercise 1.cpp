/*----------------------------
Sarah Wiegand Lab 3 Exercise 1
----------------------------*/
#include <iostream>
using namespace std;
int main ()
{
	int distance;
	cout<<"Please enter the distance between you and where you want your package sent to."<<endl;
	cout<<"It must be less than 1000 miles."<<endl;
	cin>>distance;
	if ((distance>=0) && (distance<=99))
	{
		cout<<"Cost:	$5.00"<<endl;
	}
	if ((distance>=100) && (distance<300))
	{
		cout<<"Cost:	$8.00"<<endl;
	}
	if ((distance>=300) && (distance<600))
	{
		cout<<"Cost:	$10.00"<<endl;
	}
	if ((distance>=600) && (distance<1000))
	{
		cout<<"Cost:	$12.00"<<endl;
	}
	system ("pause");
	return 0;
}