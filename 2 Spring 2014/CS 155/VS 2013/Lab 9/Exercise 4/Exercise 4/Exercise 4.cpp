/*----------------------------
Sarah Wiegand Lab 9 Exercise 4
----------------------------*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<char> name;
	char input[255];
	cout << "Enter your first name followed by a dot: ";
	cin>>input;
	name.push_back('H');
	name.push_back('i');
	name.push_back(' ');
	for(int i = 0; i < 255; ++i)
	{
		if(input[i] == '.') break;
		else name.push_back(input[i]);
	}
	for(unsigned i = 0; i < name.size(); ++i)
	{
		cout << name.at(i);
	}
	system("pause");
	return 0;
}