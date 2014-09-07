/*----------------------------
Sarah Wiegand Lab 5 Exercise 3
----------------------------*/
#include <iostream>
using namespace std;
int main ()
{
	for (int i=1; i<=9; i++)
	{
		for (int j=1; j<=9; j++)
		{
			cout<<"\t"<<(i*j);
		}
		cout<<endl<<endl;
	}
	system ("pause");
	return 0;
}