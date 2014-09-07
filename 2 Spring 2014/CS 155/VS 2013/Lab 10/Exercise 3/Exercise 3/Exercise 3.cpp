/*-----------------------------
Sarah Wiegand Lab 10 Exercise 3
-----------------------------*/
#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;
int main ()
{
	string sentence="";
	string finalsentence="";
	string tempstr="";
	cout<<"Enter a sentence."<<endl;
	getline(cin,sentence);
	stringstream ss;
	ss<<sentence;
	while (ss.good())
	{
		ss>>tempstr;
		//if it has a length of 4
		if (tempstr.length()==4 || tempstr.length()==5 && ispunct(tempstr.at(4)))
		{
			if (isupper(tempstr[0])) //check for caps
			{
				finalsentence += "|--- ";
			}
			else
			{
				finalsentence += "---- ";
			}
		}
		else
		{
			finalsentence += tempstr + " ";
		}
	}
	cout<<finalsentence<<endl;
	system ("pause");
	return 0;
}