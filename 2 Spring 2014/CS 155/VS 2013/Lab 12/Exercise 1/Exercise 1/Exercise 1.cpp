/*-----------------------------
Sarah Wiegand Lab 12 Exercise 1
-----------------------------*/
#include <iostream>
#include <string>
using namespace std;
const static string home="HOME", office="OFFICE", fax="FAX", cell="CELL", pager="PAGER";
class phonenumber
{
public:
	phonenumber();
	void setphone();
	void getphone();
	bool compare(phonenumber p2);
private:
	int country, acode, number;
	string type;
};
phonenumber::phonenumber()
{
	country= acode= number=0;
	type=home;
}
void phonenumber::setphone()
{
	cout<<"Please enter a value for the country code, the area code,\nthe phone number, and the type (home, office, fax, cell, pager)."<<endl;
	cin>>country>>acode>>number>>type;
}
void phonenumber::getphone()
{
	cout<<country<<"-"<<acode<<"-"<<number<<" "<<type<<endl;
}
bool phonenumber::compare(phonenumber p2)
{
	if (country==p2.country && acode==p2.acode && number==p2.number && type==p2.type)
		return true;
	return false;
}
int main()
{
	string type;
	phonenumber Ph1;
	phonenumber Ph2;
	Ph1.getphone();
	Ph2.getphone();
	Ph1.setphone();
	Ph2.setphone();
	if (Ph1.compare(Ph2))
		cout<<"Numbers are equal."<<endl;
	else
		cout<<"Numbers are not equal."<<endl;

	system ("pause");
	return 0;
}