/*----------------------------
Sarah Wiegand Lab 4 Exercise 3
----------------------------*/
#include <iostream>
using namespace std;
int main ()
{
	int sum=0;
	int n=1;
	int number;
	cout<<"Please enter a number."<<endl;
	cin>>number;
	do
	{
		sum+=n*n;
		++n;
	} while (n<=number);
	cout<<"Sum:	"<<sum<<endl;
	system ("pause");
	return 0;
}