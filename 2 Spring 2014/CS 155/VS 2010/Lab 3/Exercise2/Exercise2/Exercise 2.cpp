/*----------------------------
Sarah Wiegand Lab 3 Exercise 2
----------------------------*/
#include <iostream>
using namespace std;
int main ()
{
	char day;
	int time, duration;
	cout<<"Please enter the day's initial. Use R for Thursday and U for Sunday."<<endl;
	cout<<"The other days will just be the initial they begin with."<<endl;
	cin>>day;
	cout<<"Please enter the starting time hour using a 24 hour format."<<endl;
	cin>>time;
	cout<<"Please enter the duration of the call in minutes."<<endl;
	cin>>duration;
	if (day=='M'|| day=='T'|| day=='W'|| day=='R'|| day=='F')
	{
		if ((time>=8) && (time<=18))
		{
			cout<<"Cost:	"<<duration*0.40<<endl;
		}
		else ((time<8) && (time>18));
		{
			cout<<"Cost:	"<<duration*0.25<<endl;
		}
	}
	if (day== 'S'|| day=='U')
	{
		cout<<"Cost:	"<<duration*0.15<<endl;
	}
	system ("pause");
	return 0;
}