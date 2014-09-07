/*----------------------------
Sarah Wiegand Lab 4 Exercise 1
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
	while (n<=number)
	{
		sum+=n*n;
		++n;
	}
	cout<<"Sum:	"<<sum<<endl;
	system ("pause");
	return 0;
}