/*------------------------------
Sarah Wiegand  Lab 1- Exercise 3
------------------------------*/
#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string firstname, lastname;
	char gender;
	int year, age;
	double salary;
	cout<<"Please enter your First and Last name"<<endl;
	cin>>firstname>>lastname;
	cout<<"Please enter Gender Initial"<<endl;
	cin>>gender;
	cout<<"Please enter Year of Employment"<<endl;
	cin>>year;
	cout<<"Please enter Age"<<endl;
	cin>>age;
	cout<< "Please enter Salary"<<endl;
	cin>>salary;
	cout<<"First Name:			"<<firstname<<endl;
	cout<<"Last Name:			"<<lastname<<endl;
	cout<<"Gender:				"<<gender<<endl;
	cout<<"Year of Employment:		"<<year<<endl;
	cout<<"Age:				"<<age<<endl;
	cout<<"Salary				"<<salary<<endl;
	return 0;
}