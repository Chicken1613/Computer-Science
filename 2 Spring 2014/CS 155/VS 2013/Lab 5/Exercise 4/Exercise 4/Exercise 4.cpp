/*----------------------------
Sarah Wiegand Lab 5 Exercise 4
----------------------------*/
#include <iostream>
using namespace std;
int main ()
{
	int numDigits, value;
	cout<<"Please enter a number."<<endl;
	cin>>value;
	for (numDigits=0; value!=0; numDigits++)
	{
		value=value/10;
	}
	cout<<"Number of Digits:	"<<numDigits<<endl;
	system("pause");
	return 0;
}