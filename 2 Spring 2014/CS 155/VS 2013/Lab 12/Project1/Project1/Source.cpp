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
        double operate();
        bool set_operation(string op);
        void set_num1(double n);
        void set_num2(double n);
    private:
        double num1,num2;
        string operation;
};
calculator::calculator()
{
    num1 = num2 = 0.0;
    operation = "ADD";
}
double calculator::operate()
{
    if(operation == "ADD") return num1+num2;
    if(operation == "SUB") return num1-num2;
    if(operation == "DIV") return num1/num2;
    if(operation == "MUL") return num1*num2;
}
bool calculator::set_operation(string op)
{
    if(op=="add" || op == "ADD")
		{
			operation = "ADD";
			return true;
		}
	if (op=="sub" || op== "SUB")
		{
			operation="SUB";
			return true;
		}
	if (op=="mul" || op== "MUL")
		{
			operation="MUL";
			return true;
		}
	if (op=="div" || op== "DIV")
		{
			operation="DIV";
			return true;
		}
    return false;
}
void calculator::set_num1(double number)
{
    num1 = number;
}
void calculator::set_num2(double number)
{
    num2 = number;
}
int main()
{
    string operation;
    calculator calc;
    cout << "Please enter the first number."<<endl;
    double number;
    cin >> number;
    calc.set_num1(number);
    cout << "Please enter the second number."<<endl;
    cin >> number;
    calc.set_num2(number);
    cout << "Please enter the operation you wish to use (ADD, SUB, DIV, MUL)."<<endl;
    cin >> operation; 
    if(calc.set_operation(operation))
    {
        cout << calc.operate();
    }
	system ("pause");
	return 0;
}