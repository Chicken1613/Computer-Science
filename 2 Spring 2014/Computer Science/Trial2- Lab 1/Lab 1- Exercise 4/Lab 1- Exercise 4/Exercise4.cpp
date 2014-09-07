/*------------------------------
Sarah Wiegand  Lab 1- Exercise 4
------------------------------*/
#include <iostream>
using namespace std;
int main ()
{
	int amount1; //Number of items of unit 1
	int amount2; //Number of items of unit 2
	double price1; //Price of one item of unit 1
	double price2; //Price of one item of unit 2
	double total_amount;
	cout<<"Number of Items of Unit 1"<<endl;
	cin>>amount1;
	cout<<"Price of one item of Unit 1"<<endl;
	cin>>price1;
	cout<<"Number of Items of Unit 2"<<endl;
	cin>>amount2;
	cout<<"Price of one item of Unit 2"<<endl;
	cin>>price2;
	total_amount= (amount1*price1)+(amount2*price2);
	cout<<"Number of Items of Unit 1:			"<<amount1<<endl;
	cout<<"Price of one item of Unit 1:			"<<price1<<endl;
	cout<<"Number of Items of Unit 2:				"<<amount2<<endl;
	cout<<"Price of one item of Unit 2:		"<<price2<<endl;
	cout<<"Total Purchase Amount:				"<<total_amount<<endl;
	return 0;
}