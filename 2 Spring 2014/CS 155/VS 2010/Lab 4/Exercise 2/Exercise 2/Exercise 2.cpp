/*----------------------------
Sarah Wiegand Lab 4 Exercise 2
----------------------------*/
#include <iostream>
using namespace std;
int main ()
{
	int number;
	bool prime= true;
	cout<<"Please enter a number."<<endl;
	cin>>number;
	for (int n=2;n<number;++n)
	{
		if ((number% n)==0)
		{
			prime= false;
			break;
		}
	}
	if (prime)
		cout<<number<<" is a prime number."<<endl;
	else
		cout<<number<<" is not a prime number."<<endl;
	system ("pause");
	return 0;
}