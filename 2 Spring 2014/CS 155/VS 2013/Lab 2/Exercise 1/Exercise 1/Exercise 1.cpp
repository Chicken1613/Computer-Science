/*----------------------------
Sarah Wiegand Lab 2 Exercise 1
----------------------------*/
#include <iostream>

using namespace std;
int main ()
{
	int maximum, attend;
	cout<<"Please enter maximum room capacity."<<endl;
	cin>>maximum;
	cout<<"Please enter the number of people attending."<<endl;
	cin>>attend;

	if (maximum>=attend)
	{	cout<<"It is legal to hold the meeting."<<endl;
	cout<<maximum-attend<<" more people may attend."<<endl;
	}
else
	{	
	cout<<"The meeting cannot be held as planned due to fire regulations."<<endl;
	cout<<attend-maximum<<" people must be excluded in order to meet regulations."<<endl;
	}
	system("pause");
	return 0;
}