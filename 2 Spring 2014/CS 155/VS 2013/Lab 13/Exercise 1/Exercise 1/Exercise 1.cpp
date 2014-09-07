/*-----------------------------
Sarah Wiegand Lab 13 Exercise 1
-----------------------------*/
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	ifstream in;
	in.open("Input.txt");
	if (in.fail())
	{
		cout<<"Input file failed to open.\n";
		exit (1);
	}
	string temp;
	int num (0), Cnum (0), Snum (0), NAnum (0), Dnum (0);
	while (in.good())
	{
		getline(in, temp);
		for (char c:temp)
		{
			if (isupper(c))
				++Cnum;
			if (islower(c))
				++Snum;
			if (!isalpha(c))
				++NAnum;
			if (isdigit(c))
				++Dnum;
			if (isspace(c))
				++num;
		}
		++num;
	}
	cout<<"Number of Words:		"<<num<<endl;
	cout<<"Number of Capital Letters:	"<<Cnum<<endl;
	cout<<"Number of Lowercase Letters:	"<<Snum<<endl;
	cout<<"Number of Non-Alpha Letters:	"<<NAnum<<endl;
	cout<<"Number of Digits:		"<<Dnum<<endl;
	system ("pause");
	return 0;
}