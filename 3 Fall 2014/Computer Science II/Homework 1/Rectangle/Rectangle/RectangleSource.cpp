/*Author: Sarah Wiegand
  Date: September 08, 2014
  Purpose: Write a program that uses a Rectangle structure to write three functions.
*/
#include <iostream>
using namespace std;
struct Rectangle
{
	int length;
	int width;
};
/*Purpose:Write a function that outputs the length and width that the user inputs.
  Preconditions:A Rectangle structure with length and width properties exists.
  Postconditions:Outputs the length and width of the rectangle.
*/
void display (Rectangle rectangle)
{
	cout<<"Length: "<<rectangle.length<<endl;
	cout<<"Width:  "<<rectangle.width<<endl;
}
/*Purpose:Write a function that stores the user's input for length and width in the
  structure's members.
  Preconditions:A Rectangle structure has been created.
  Postconditions:Length and width properties are stored in the Rectangle object.
*/
void store (Rectangle& rectangle)
{
	cout<<"Please enter the length and width of a rectangle.\n";
		cin>>rectangle.length>>rectangle.width;
}
/*Purpose:Write a function that stores the user's input for length and width in the
  structure's members and then returns it.
  Preconditions:None
  Postconditions:Creates a new Rectangle Object.
*/
Rectangle create ()
{
	cout<<"Please enter the length and width of a rectangle.\n";
	Rectangle rectangle;
	cin>>rectangle.length>>rectangle.width;
	return rectangle;
}
int main ()
{
	Rectangle rectangle;
	store (rectangle);
	display (rectangle);
	Rectangle rect= create ();
	display (rect);
	//system ("pause");
	return 0;
}