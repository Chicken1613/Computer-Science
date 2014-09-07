/*----------------------------
Sarah Wiegand Lab 8 Exercise 2
----------------------------*/
#include <iostream>
using namespace std;
int out_of_order (double a [], int size)
{
	for (int i=0; i<size; ++i)
	{
		for (int j=i+1;j<size ; j+=size)
		{
			if (a[i]> a[j])
				return j;
		}
	}
	return -1;
}

int main ()
{
	double a [10] = {1.2, 2.1, 3.3, 2.5, 4.5, 7.9, 5.4, 8.7, 9.9, 1.0};
	cout<<out_of_order(a, 10)<<endl;
	
	system ("pause");
	return 0;
}