/*-----------------------------
Sarah Wiegand Lab 13 Exercise 2
-----------------------------*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream in1;
	ifstream in2;
	ofstream out1;
	ofstream out2;
	int count=0;
	double average=0;
	int number, sum=0;
	in1.open("inFile1.txt");
	in2.open("inFile2.txt");
	if (in1.fail() || in2.fail())
	{
		cout<<"Input files failed to open.\n";
	}
	while (in1.good())
	{
		in1>>number;
		sum+=number;
		++count;
	}
	while (in2.good())
	{
		in2>>number;
		sum+=number;
		++count;
	}
	average=sum/(double)count;
	cout<<"Sum:		"<<sum<<endl;
	cout<<"Average:	"<<average<<endl;
	in1.close();
	in2.close();
	in1.open("inFile1.txt");
	in2.open("inFile2.txt");
	if (in1.fail() || in2.fail())
	{
		cout<<"Input files failed to open.\n";
	}
	out1.open("outFile1.txt");
	out2.open("outFile2.txt");
	if (out1.fail() || out2.fail())
	{
		cout<<"Output files failed to open.\n";
	}
	while (in1.good())
	{
		in1>>number;
		if (number<average)
			out1<<number<<"\n";
		if (number>average)
			out2<<number<<"\n";
	}
	while (in2.good())
	{
		in2>>number;
		if (number<average)
			out1<<number<<"\n";
		if (number>average)
			out2<<number<<"\n";
	}
	in1.close();
	in2.close();
	out1.close();
	out2.close();
	system("pause");
	return 0;
}