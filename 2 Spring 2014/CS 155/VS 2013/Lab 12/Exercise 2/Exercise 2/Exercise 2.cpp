/*-----------------------------
Sarah Wiegand Lab 12 Exercise 2
-----------------------------*/
#include <iostream>
#include <string>
using namespace std;
class calculator
{
public:
	calculator();
	double operate;
	bool set_operation(string op);
	bool set_num1(double n);
	bool set_num2(double n);
private:
	double num1, num2;
	string operation;
};
calculator::calculator()
	{
		num1= num2=0.0;
		operation="ADD";
	}
	double calculator::operate()
	{
		if (operation=="ADD")
			return num1+num2;
		if (operation=="SUB")
			return num1-num2;
		if (operation=="MUL")
			return num1*num2;
		if (operation=="DIV")
			return num1/num2;
	}
	bool calculator::set_operation(string op)
	{
		if (op=="add" || "ADD")
		{
			operation="ADD";
			return true;
		}
		if (op=="sub" || "SUB")
		{
			operation="SUB";
			return true;
		}
		if (op=="mul" || "MUL")
		{
			operation="MUL";
			return true;
		}
		if (op=="div" || "DIV")
		{
			operation="DIV";
			return true;
		}
	}
	int main()
{
		
		double num1, num2;
		string operation;
		calculator C;
		cout<<"Please enter two numbers and the operation you wish to use (ADD, SUB, DIV, MUL)."<<endl;
		cin>>num1>>num2>>operation;
	C.set();
	system ("pause");
	return 0;
}