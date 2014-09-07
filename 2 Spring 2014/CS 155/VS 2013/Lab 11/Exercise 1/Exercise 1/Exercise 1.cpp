/*-----------------------------
Sarah Wiegand Lab 11 Exercise 1
-----------------------------*/
#include <iostream>
#include <string>
using namespace std;
class student
{
public:
	student(){fname= lname= address= dob= tel= ID= major=" ";}
	void info()
	{
		cout<<"Please enter your: first name, last name, date of birth, \ntelephone number, ID, major, and address seperated with spaces."<<endl;
		cout<<"If major is more than one word, do not put spaces."<<endl;
		cin>>fname>>lname>>dob>>tel>>ID>>major;
		getline(cin, address);
		address=address.substr(1,address.npos);
	}
	void get()
	{
		cout<<"First Name:\t\t"<<fname<<endl;
		cout<<"Last Name:\t\t"<<lname<<endl;
		cout<<"Address:\t\t"<<address<<endl;
		cout<<"Date of Birth:\t\t"<<dob<<endl;
		cout<<"Telephone number:\t"<<tel<<endl;
		cout<<"ID:\t\t\t"<<ID<<endl;
		cout<<"Major:\t\t\t"<<major<<endl;
	}
private:
	string fname, lname, address, dob, tel, ID, major;
};
class studentgrades
{
public:
	studentgrades(){quiz1= quiz2= midterm= end=0;}
	void setgrades(int nquiz1, int nquiz2, int nmidterm, int nend)
	{
		quiz1=nquiz1;
		quiz2=nquiz2;
		midterm=nmidterm;
		end=nend;
	}
	int numgrade()
	{
		return((quiz1+ quiz2+ midterm+ end)/4);
	}
	void lettergrade()
	{
		if (numgrade()>=90)
		{
			cout<<"A";
		}
		else if (numgrade()>=80)
		{
			cout<<"B";
		}
		else if (numgrade()>=70)
		{
			cout<<"C";
		}
		else if (numgrade()>=60)
		{
			cout<<"D";
		}
		else
		{
			cout<<"F";
		}
	}
	void get()
	{
		cout<<"Quiz 1:	"<<quiz1<<endl;
		cout<<"Quiz 2:	"<<quiz2<<endl;
		cout<<"Midterm:	"<<midterm<<endl;
		cout<<"Final:	"<<end<<endl;
	}
private:
	int quiz1, quiz2, midterm, end;
};
int main ()
{
	student st1;
	studentgrades gr1;
	int quiz1, quiz2, midterm, end;
	quiz1= quiz2= midterm= end=0;
	st1.info();
	st1.get();
	cout<<"Enter number for quiz 1, quiz 2, midterm, and final."<<endl;
	cin>>quiz1>>quiz2>>midterm>>end;
	gr1.setgrades(quiz1, quiz2, midterm, end);
	gr1.get();
	cout<<gr1.numgrade()<<endl;
	gr1.lettergrade();
	cout<<endl;
	system ("pause");
	return 0;
}