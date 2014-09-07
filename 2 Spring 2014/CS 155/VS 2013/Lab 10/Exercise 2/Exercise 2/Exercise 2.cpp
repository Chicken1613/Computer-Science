/*-----------------------------
Sarah Wiegand Lab 10 Exercise 2
-----------------------------*/
#include <iostream>
#include <string>
using namespace std;
void tolower (string & str)
{
	for (auto i=0u;i<str.length();++i)
		str.at(i)=tolower (str.at(i));
}
string topig (string str)
{
	string out="";
	if (str.length()>0)
	{
		switch (tolower (str.at(0)))
		{
		case 'a': case 'e': case 'i': case 'o': case 'u':
			out=str + "way";
			break;
		default:
			if (str.length()>1)
				out=str.substr(1) + str.at(0)+"ay";
		}
	}
	return out;
}
int main ()
{
	string first, last, pigfirst, piglast;
	cout<<"Please enter your first and last name."<<endl;
	cin>>first>>last;
	tolower (first);
	tolower (last);
	pigfirst=topig(first);
	piglast=topig(last);
	pigfirst[0]=toupper(pigfirst[0]);
	piglast[0]=toupper(piglast[0]);
	cout<<pigfirst<<" "<<piglast<<endl;
	system ("pause");
	return 0;
}