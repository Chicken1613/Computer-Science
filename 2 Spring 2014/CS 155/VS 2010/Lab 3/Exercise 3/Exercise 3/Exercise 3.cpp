/*----------------------------
Sarah Wiegand Lab 3 Exercise 3
----------------------------*/
#include <iostream>
using namespace std;
int main ()
{
	int number;
	cout<<"Please enter a number that reprsents a TV channel."<<endl;
	cin>>number;
	switch (number)
	{
	case 2:
			{
				cout<<"WCBS"<<endl;
			}
			break;
	case 4:
			{
				cout<<"WNBC"<<endl;
			}
			break;
	case 5:
			{
				cout<<"WNEW"<<endl;
			}
			break;
	case 7:
			{
				cout<<"WABC"<<endl;
			}
			break;
	case 9:
			{
				cout<<"WOR"<<endl;
			}
			break;
	case 11:
			{
				cout<<"WPIX"<<endl;
			}
			break;
	case 13:
			{
				cout<<"WNET"<<endl;
			}
			break;
	default:
			{
				cout<<"This channel is not used."<<endl;
			}
			break;
	}
	system ("pause");
	return 0;
}