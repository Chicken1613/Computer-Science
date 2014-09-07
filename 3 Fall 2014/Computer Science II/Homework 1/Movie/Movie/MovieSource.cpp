/*Author: Sarah Wiegand
  Date: September 08, 2014
  Purpose: Write a program that creates a structure to hold information
  about a user's favorite movie.
*/
#include <iostream>
#include <string>
using namespace std;
//Structure declaration to hold the movie information
struct Movie
{
	string name;
	string director;
	int year;
};
int main ()
{
	//string name, director, year;
	//Defining the structure variable
	Movie movie;
	cout<<"Enter the following information about your favourite movie.\n";
	cout<<"Title:           ";
	getline(cin,movie.name);
	//need to store it in the appropriate structure member
	
	cout<<"Director:        ";
	getline(cin,movie.director);
	//need to store it in the appropriate structure member

	cout<<"Year of Release: ";
	cin>>movie.year;
	//need to store it in the appropriate structure member

	cout<<"\nHere is the information on your favorite movie:\n";
	cout<<"Title:           "<<movie.name<<endl;
		//info from structure variable
	cout<<"Director:        "<<movie.director<<endl;
		//info from structure variable
	cout<<"Year of Release: "<<movie.year<<endl;
		//info from structure variable

	system ("pause");
	return 0;
}