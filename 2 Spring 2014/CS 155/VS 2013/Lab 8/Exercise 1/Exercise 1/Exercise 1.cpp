/*----------------------------
Sarah Wiegand Lab 8 Exercise 1
----------------------------*/
#include <iostream>
using namespace std;

void input_data (int a [], int number_of_plants)
{
	for (int i= 0; i < number_of_plants; ++i)
	{
		a[i] = -1;
		while(a[i] < 10 || a[i] > 100)
		{
			cout<<"Enter production (10-100) for plant # "<<i+1<<"\n";
			cin>>a[i];
		}
	}
}

void scale (int a [], int number_of_plants)
{
	for (int i=0; i< number_of_plants; ++i)
	{
		if(a[i] % 10 < 5) a[i] -= (a[i] % 10);
		else a[i] += (10 - (a[i] % 10));
	}
}

void graph (int a[], int size)
{
	//Rounding numbers
	scale (a, size);
	//Creating index, checking all values
	for (int i=0; i< size; ++i)
	{
		//Calculate number of stars
		int stars= a[i]/10;
		cout<<"Plant # "<<i+1<<":	";
		//Printing stars for current line
		for (int j=0; j<stars; ++j)
		{
			cout<<"*";
		}
		cout<<endl;
		//Stars are done printing
	}
}

int main ()
{
	const int number_of_plants = 10;
	int production [number_of_plants];
	input_data(production, number_of_plants);
	
	graph (production, number_of_plants);

	system ("pause");
	return 0;
}
