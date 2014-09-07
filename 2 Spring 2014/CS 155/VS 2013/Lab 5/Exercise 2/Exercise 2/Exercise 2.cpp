/*----------------------------
Sarah Wiegand Lab 5 Exercise 2
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
		system ("pause");
		exit (0);
	}
	int n = number /2;
	for (int i=0; i<number; i+=2)
	{
		for(int j=0; j< n-i/2; ++j)
		{
			cout<<" ";
		}
		for(int j = 0; j <= i; ++j)
		{
			cout << "*";
		}
		for(int j = 0; j < n-i/2; ++j)
		{
			cout << " ";
		}
		cout << "\n";
	}
	system ("pause");
	return 0;
}