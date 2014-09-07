/*----------------------------
Sarah Wiegand Lab 4 Exercise 2
----------------------------*/
#include <iostream>
using namespace std;
int main ()
{
	int number;
	
	cout<<"Please enter the number of stars for the base of a triangle."<<endl;
	cin>>number;
	if (number%2==0)
	{
		cout<<"Error"<<endl;
		exit (0);
	}
	for (int x=1; x<=number; x++)
	{
		for (int y=1; y<=number; y++)
		{
			cout<<"*";
		}
	}
	system ("pause");
	return 0;
}