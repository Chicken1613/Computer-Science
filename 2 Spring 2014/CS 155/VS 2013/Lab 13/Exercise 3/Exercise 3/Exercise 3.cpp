/*-----------------------------
Sarah Wiegand Lab 13 Exercise 3
-----------------------------*/
#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
	ifstream in;
	ofstream out;
	in.open("inStudentFile.txt");
	if (in.fail())
	{
		cout<<"Input file failed to open.\n";
		exit (1);
	}
	out.open("outStudentFile.txt");
	if (out.fail())
	{
		cout<<"Output file failed to open.\n";
		exit (1);
	}
	string qnum;
	int ID, grade;
	double average=0, total=0, count=0;
	while (in.good())
	{
		in>>ID;
		out<<"Student ID: "<<ID<<"\n";
		out<<"Quiz	"<<"Grade\n";
		for (int i=0; i<5; ++i)
		{
			in>>qnum;
			in>>grade;
			out<<qnum<<"	"<<grade<<"\n";
			total+=grade;
			++count;
		}
		out<<"-----------\n";
		out<<"Total:	"<<total<<"\n";
		average=total/count;
		out<<"Average:"<<average<<"\n";
		out<<"===========\n";
		total=count=0;
	}
	in.close();
	out.close();
	system ("pause");
	return 0;
}