/*----------------------------
Sarah Wiegand Lab 7 Exercise 3
----------------------------*/
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int max (int a, int b)
{
	return (a>b)?a:b;
}
bool check (int a, int b, int c)
{
	int largest=max (a, max (b,c));
	if (c==largest && (a+b)>c || b==largest && (a+c)>b || a==largest && (b+c)>a)
		return true;
	else return false;
}
double calc_area (int a, int b, int c)
{
	double s= 0.5*(a+b+c);
	double area= sqrt (s*(s-a)*(s-b)*(s-c));
	return area;
}
int main ()
{
	double num1, num2, num3;
	cout <<"Please enter three sides of a triangle."<<endl;
	cin>>num1;
	cin>>num2;
	cin>>num3;
	if (!check (num1, num2, num3))
	{
		cout<<"Error"<<endl;
	}
	else
	{
		cout<<"Area:	"<<calc_area (num1, num2, num3)<<endl;
	}
	system ("pause");
	return 0;
}