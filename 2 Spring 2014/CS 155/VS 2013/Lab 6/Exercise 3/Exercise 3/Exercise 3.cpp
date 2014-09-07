/*----------------------------
Sarah Wiegand Lab 6 Exercise 3
----------------------------*/
#include <iostream>
#include <string>
using namespace std;
string convert (char letter)
{
	string word= "";
	switch (letter)
	{
		case'a': case'A':
			word="Alpha";
		break;
		case'b': case'B':
			word="Bravo";
		break;
		case'c': case'C':
			word="Charlie";
		break;
		case'd': case'D':
			word="Delta";
		break;
		case'e': case'E':
			word="Echo";
		break;
		case'f': case'F':
			word="Foxtrot";
		break;
		case'g': case'G':
			word="Golf";
		break;
		case'h': case'H':
			word="Hotel";
		break;
		case'i': case'I':
			word="India";
		break;
		case'j': case'J':
			word="Juliet";
		break;
		case'k': case'K':
			word="Kilo";
		break;
		case'l': case'L':
			word="Lima";
		break;
		case'm': case'M':
			word="Mike";
		break;
		case'n': case'N':
			word="November";
		break;
		case'o': case'O':
			word="Oscar";
		break;
		case'p': case'P':
			word="Papa";
		break;
		case'q': case'Q':
			word="Quebec";
		break;
		case'r': case'R':
			word="Romeo";
		break;
		case's': case'S':
			word="Sierra";
		break;
		case't': case'T':
			word="Tango";
		break;
		case'u': case'U':
			word="Uniform";
		break;
		case'v': case'V':
			word="Victor";
		break;
		case'w': case'W':
			word="Whiskey";
		break;
		case'x': case'X':
			word="X-ray";
		break;
		case'y': case'Y':
			word="Yankee";
		break;
		case'z': case'Z':
			word="Zulu";
		break;
		case'.':
		break;
	}
	return word;
}
int main()
{
	char letter;
	cout<<"Please enter a series of characters ending with a period."<<endl;
	cin>>letter;
	while (letter!='.')
	{
		cout<<convert (letter)<<" ";
		cin>>letter;
	}
	cout<<endl;
	system ("pause");
	return 0;
}