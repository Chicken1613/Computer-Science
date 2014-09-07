/*----------------------------
Sarah Wiegand Lab 5 Exercise 1
----------------------------*/
#include <iostream>
using namespace std;
int main ()
{
	int number;
	int sum=0;
	cout<<"Please enter a number."<<endl;
	cin>>number;
	for (int n=1; n<=number; ++n)
	{
		sum+=n*n;
	}
	cout<<"Sum:	"<<sum<<endl;
	system ("pause");
	return 0;
}