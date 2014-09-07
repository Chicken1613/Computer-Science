/*-----------------------------
Sarah Wiegand Lab 10 Exercise 1
-----------------------------*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string first, middle, last;
	bool choice=true;
	char answer;
	do
	{
		cout<<"Please enter your first name, middle initial, and last name."<<endl;
		cin>>first>>middle>>last;
		cout<<last<<", "<<first<<" "<<middle.at(0)<<endl;
		cout<<"Repeat? Y/N"<<endl;
		cin>>answer;
		if (answer=='n' || answer == 'N')
			choice=false;
	} while (choice==true);
	system ("pause");
	return 0;
}