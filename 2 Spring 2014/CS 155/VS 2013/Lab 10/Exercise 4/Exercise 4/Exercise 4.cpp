/*-----------------------------
Sarah Wiegand Lab 10 Exercise 4
-----------------------------*/
#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;
string tolower (string str)
{
	for (auto i=0u;i<str.length();++i)
		str.at(i)=tolower (str.at(i));
	return str;
}
int main ()
{
	string sentence="";
	string finalsentence="";
	string tempstr="";
	stringstream ss;
	cout<<"Please enter a sentence."<<endl;
	getline(cin,sentence);
	if(sentence.length() > 100u)
	{
		sentence.resize(100);
	}
	unsigned pos;
	if((pos = sentence.find('.')) != sentence.npos)
	{
		sentence = sentence.substr(0, pos + 1);
	}
	ss<<tolower(sentence);
	while (ss.good())
	{
		ss>>tempstr;
		finalsentence += tempstr;
		if (tempstr.find('.') ==tempstr.npos)
			finalsentence += " ";
	}
	finalsentence.at(0)=toupper(finalsentence.at(0));
	cout<<finalsentence<<endl;
	system ("pause");
	return 0;
}