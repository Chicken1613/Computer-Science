/*----------------------------
Sarah Wiegand Lab 8 Exercise 3
----------------------------*/
#include <iostream>
using namespace std;
void rotate (int a [], int n, int k)
{
	int temp=0;
	for (int i=0; i<k; ++i)
	{
		temp= a [n-1];
		for (int j=n-2; j>=0; --j)
		{
			a [(j+1)%n]=a [j];
		}
		a [0]= temp;
	}
}
int main ()
{
	int a [8]= {22, 33, 44, 55, 66, 77, 88, 99};
	for (int i=0; i<8; ++i)
	{
		cout<<a [i] <<" ";
	}
	rotate (a, 8, 3);
	cout<<endl;
	for (int i=0; i<8; ++i)
	{
		cout<<a [i] <<" ";
	}
	cout<<endl;
	system ("pause");
	return 0;
}