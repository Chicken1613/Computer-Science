/*----------------------------
Sarah Wiegand Lab 6 Exercise 1
----------------------------*/
#include <iostream>
using namespace std;
int sum (int a, int b)
{
	return (a+b);
}
int sub (int a, int b)
{
	return (a-b);
}
int mult (int a, int b)
{
	return (a*b);
}
double idiv (int a, int b)
{
	return (a/(double)b);
}
int main()
{
	bool running=true;
	int number1, number2, choice;
	cout<<"Please enter the first number."<<endl;
	cin>>number1;
	cout<<"Please enter the second number."<<endl;
	cin>>number2;
	while (running)
	{
	cout<<"Please choose a number that corresponds to a choice."<<endl;
	cout<<"1:	Addition"<<endl;
	cout<<"2:	Subtraction"<<endl;
	cout<<"3:	Multiplication"<<endl;
	cout<<"4:	Division"<<endl;
	cout<<"5:	Exit"<<endl;
	cin>>choice;
	switch (choice)
	{
	case 1:
		{
			int answer=sum(number1, number2);
			cout<<"Sum:	"<<answer<<endl;
		}
		break;
	case 2:
		{
			int answer=sub(number1, number2);
			cout<<"Difference:	"<<answer<<endl;
		}
		break;
	case 3:
		{
			int answer=mult(number1, number2);
			cout<<"Product:	"<<answer<<endl;
		}
		break;
	case 4:
		{
			if ((number1) || (number2)>0)
			{
				double answer=idiv(number1, number2);
			cout<<"Quotient:	"<<answer<<endl;
			}
			else
			{
				cout<<"Error"<<endl;
				exit (0);
			}
		}
		break;
	case 5:
		{
			  running=false;
		}
		break;
	default:
		{
			   cout<<"Error"<<endl;
		}
		break;
	}
	}
	system ("pause");
	return 0;
}
