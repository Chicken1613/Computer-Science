/*----------------------------
Sarah Wiegand Lab 2 Exercise 2
----------------------------*/
#include <iostream>
using namespace std;
int main ()
{
	int firstNum, secondNum, location, p1,p2, p3, p4;
	bool equal = false;
	cout<<"Please enter a four digit number."<<endl;
	cin>>firstNum;
	cout<<"Please enter a one digit number."<<endl;
	cin>>secondNum;
	cout<<"Please enter the location number you want to check."<<endl;
	cin>>location;
	p4 = firstNum / 1000;
	firstNum= firstNum % 1000;
	p3 = firstNum / 100;
	firstNum= firstNum % 100;
	p2 = firstNum / 10;
	p1 = firstNum % 10;
	cout<<"Location 1: "<<p1<<endl;
	cout<<"Location 2: "<<p2<<endl;
	cout<<"Location 3: "<<p3<<endl;
	cout<<"Location 4: "<<p4<<endl;
	switch (location)
	{
	case 1:
		if (secondNum==p1)
		{
			equal= true;
		}
		break;
	case 2:
		if (secondNum==p2)
		{
			equal= true;
		}
		break;
	case 3:
		if (secondNum==p3)
		{
			equal= true;
		}
		break;
	case 4:
		if (secondNum==p4)
		{
			equal= true;
		}
		break;
	default:
		cout<<"The location is incorrect."<<endl;
	}
	if(equal)
		cout<<"Equal"<<endl;
	else
		cout<<"Not equal"<<endl;
	system ("pause");
	return 0;
}