/*----------------------------
Sarah Wiegand Lab 3 Exercise 4
----------------------------*/
#include <iostream>
using namespace std;
int main ()
{
	int radius, option;
	double pi, surface, volume;
	pi= 3.1415926536;
	cout<<"Enter 1 to display a welcome message."<<endl;
	cout<<"Enter 2 to calculate the surface area of a sphere."<<endl;
	cout<<"Enter 3 to calculate the volume of a sphere."<<endl;
	cin>>option;
	switch (option)
	{
	case 1:
		{
			cout<<"Welcome!"<<endl;
		}
		break;
	case 2:
		{
			cout<<"Please enter the value of the radius."<<endl;
			cin>>radius;
			surface= 4*pi*(radius*radius);
				cout<<"Surface area:	"<<surface<<endl;
		}
		break;
	case 3:
		{
			cout<<"Please enter the value of the radius."<<endl;
			cin>>radius;
			volume= ((4/3.0)*pi)*((radius*radius)*radius);
				cout<<"Volume:	"<<volume<<endl;
		}
		break;
	default:
		{
			cout<<"Not a valid choice."<<endl;
		}
		break;
	}
	system ("pause");
	return 0;
}