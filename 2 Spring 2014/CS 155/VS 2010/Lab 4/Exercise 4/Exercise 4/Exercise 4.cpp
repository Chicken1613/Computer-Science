/*----------------------------
Sarah Wiegand Lab 4 Exercise 4
----------------------------*/
#include <iostream>
using namespace std;
int main ()
{
	int number, sum, psum=0, nsum=0;
	char ans;
	do
	{
		cout<<"Please enter a number. It may be positive or negative."<<endl;
		cin>>number;
		if (number>0)
		{
			psum+= number;
		}
		if (number<=0)
		{
			nsum+= number;
		}
		cout<<"Would you like to enter another number?"<<endl;
		cin>>ans;
	} while (ans=='y' || ans=='Y');
	sum= psum+ nsum;
		cout<<"Sum:	"<<sum<<endl;
		system ("pause");
	return 0;
}